/* maxhue = 192 */

#include "Arduino.h"
#include "avr/io.h"


#define W_ONE __asm__ __volatile__ ( \
						"sbi 0x02,0" "\n\t"\
						"nop" "\n\t"\
						"nop" "\n\t"\
						"nop" "\n\t"\
						"nop" "\n\t"\
						"nop" "\n\t"\
						"cbi 0x02,0" "\n\t"\
						"nop" "\n\t"::\
						)

#define W_ZERO __asm__ __volatile__ ( \
						"sbi 0x02,0" "\n\t"\
						"nop" "\n\t"\
						"cbi 0x02,0" "\n\t"\
						"nop" "\n\t"\
						"nop" "\n\t"\
						"nop" "\n\t"\
						"nop" "\n\t"\						
						"nop" "\n\t"::\
						)

#define NUM_PIX 3

#define PIX_PIN 0
#define BTN_PIN 1

typedef unsigned char uint8_t;

void pix();

uint8_t hue[NUM_PIX];
uint8_t state;
uint8_t phase;
bool pressed;

void setup(){
	pinMode(PIX_PIN, OUTPUT);
	pinMode(BTN_PIN, INPUT);
	PUEB = 1 << PUEB1;
	state = 1;
	pressed = 0;
}

void loop(){
	
	if(digitalRead(BTN_PIN) == 0){
		if(!pressed){
    		hue[0] = 0;	
    
    		state++;
       		pressed = true;
		}
	}else{
		pressed = false;
	}

	if(state == 0){

		for(uint8_t i = 0; i<24*NUM_PIX; i++){ 
			W_ZERO;
		}

	} else if (state == 1) {

		hue[0]++;
		hue[1] = hue[0] + 10;
		hue[2] = hue[1] + 10;

	} else if (state < 14){

		uint8_t h = (state-2) << 4;
		uint8_t add;
		if(phase<128){
			add = phase>>3;
		}else{
			add = (256-phase)>>3;
		}
		hue[0] = h + add;
		hue[1] = h + 8;
		hue[2] = h + 16 - add;
		phase += 2;	

	} else {
		state = 0;
 	}

	if(state){
		pix();
	}

	delay(75);
}


inline void pix(){
	for(uint8_t i=0; i<NUM_PIX; i++){
		
		if(hue[i]>=192){
    		hue[i] -= 192;
		}

		uint8_t area = hue[i]>>5;
		uint8_t ang = ((0b00011111) & hue[i])<<3;

		for(uint8_t c = 0; c<3; c++){
			uint8_t out;
			
			switch(area){
				case 0: case 6:
        			out = ang;
    				break;

				case 1: case 2: case 7: case 8:
        			out = 255;
    				break;

				case 3: case 9:
    				out = 255-ang;
    				break;

				default:
    				out = 0;
    				break;
			}
			
			area += 2;

			for(uint8_t b=0; b<8; b++){
    			if(out & 0x80>>b){
    				W_ONE;
    			} else {
    				W_ZERO;
    			}
    		}
		}

	}
}

