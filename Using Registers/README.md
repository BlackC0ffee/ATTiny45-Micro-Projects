# Using Registers

This is a small try-out to using registers

## Schametics

* PB0 -> LED -> Ground
* PB2 -> Button -> Ground

## ArduinoStyle

This file contains a simple demo using "arduino-code".
Total code size: 642 bytes of flash

## RegisterStyle

This file contains a simple demo using register manipulation.
Total code size: 292 bytes of flash

To set and read register positions we are using Masking

### Info about (1 << led_pin) | PORTB

This operation is to change a bit to 1 on the led_pin location
(1 << led_pin) sets  a 1 on the location of led_pin (0). In our situation we get the binary value 00000001
The | PORTB is an OR operation. So 00000001 OR 00000100 = 00000101

### Info about ~(1 << led_pin) & PORTB

This operations sets a bit to 0
~ equals a NOT operation, so ~(1 << led_pin) sets 0 on the location of "led_pin", in our case 0. As a result we get the binary value 1111110
The & PORTB is an AND operation. So 1111110 AND 00000101 = 00000100

## Resource

Nice, but fast tutorial on registers for Arduino: <https://www.youtube.com/watch?v=6q1yEb_ukw8>
Masking: <https://en.wikipedia.org/wiki/Mask_(computing)>
