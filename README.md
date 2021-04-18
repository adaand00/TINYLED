# TINYLED

<img src="/Img/Cat.jpg" alt="Image of cat sign" width="400"/>

Light-up sign with an attiny10 and three ws2812b RGB LEDs. 

## Introduction

This is a simple project to make a light-up stand for laser-cut acrylic signs. I mainly did this as an excercise in using the attiny10-series of microcontrollers. They are very limited with just 512 or 1024 bytes of flash and 32 bytes RAM. The final code is just under 500 bytes, of which half is for driving the LEDs. 

## Circuit board

The PCB was designed in fusion360. There are test points on the underside for pogo-pin programming. The PCB also has slots for the laser cut feet to snap-fit into. 

<img src="/Img/PCBtop.PNG" alt="Top of PCB" width="400"/>
<img src="/Img/PCBbottom.PNG" alt="Bottom of PCB" width="400"/>

Gerber files are supplied in the hardware folder. 

## Programming

I used the [Attiny10IDE](https://github.com/wholder/ATTiny10IDE) by @wholder to program the chip. I managed to fit one rainbow animation and a couple solid color animations into the 512 byte memory of the attiny5. Because of space constraints, I have only implemented hue control for the LEDs. If the code was optimized a bit, brightness control could perhaps also be implemented, which would enable some more cool animations. 

The source code is provided as a .c file that can be modified and built with the attiny10IDE. There is also a .ino file that can be used to turn an arduino into a programmer.

## BOM

* 1x Attiny4/5/9/10 (tested with 5, should work with all)
* 3x ws2812b, also known as neopixels
* 1x 6x6mm tactile pushbutton with SMD mounting
* 1x 500 ohm 0603 resistor
* 1x molex 105017-0001 micro USB connector 
* 1x PCB 

## Future work

- [ ] Add brightness control in LED driver function.
- [ ] Modify PCB to allow for bigger signs (Move feet, add more LEDs, use smaller switch).
- [ ] Ditch micro USB for battery, USB-C or barrel jack.
