Soil moisture sensor

Little write up for future me and anyone interested, it's my thought process and any errors I ran into.

What will it do? 

Once the prongs are pushed into the ground/soil, leave for a minute and display the moisture level on a LCD screen using an Arduino Nano.

What was used: 

Arduino Nano 
LCD_I2C
Moisture Sensor (Cant find exact name, it's everywhere though)

Error's I encountered:

First, I couldn't upload a sketch to the Nano. I fixed this by first burning the bootloader using an Uno Arduino. Second 'fix' which could of been the actual issue,
which was choosing the right settings.... So for this I choose Arduino AVR Boards --> Arduino Nano and Processor --> ATMega328p.

Orginally I wanted to have the information displayed through the analog output, but found it very inaccurate (cheap components) so I switched to Digital output and while I will only get a 0 or 1 this is perfect for my setup, also did this by carefully turning the potentiometer since we're only working with digital.


Wiring for reference: 

LCD screen:

GND -> GND
VCC -> 5V
SDA -> A4
SCL -> A5

Moisture Sensor:

GND -> GND
VCC -> 5V
D0 -> D2 (Can choose any digital pin)