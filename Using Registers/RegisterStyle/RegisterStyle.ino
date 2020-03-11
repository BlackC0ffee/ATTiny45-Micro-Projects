const int button_pin = 2;
const int led_pin = 0;

void setup() {
    DDRB = B00000001; // Sets Port 0 as output and the rest as input
    PORTB = B00000100; // Enables the Pull-up Resitor on PB2 and sets 0V on PB0 0
}

void loop() {

    int button = ((1 << button_pin) & PINB) >> button_pin;

    if ( button == LOW ) {
        PORTB = (1 << led_pin) | PORTB; //Set 5V (1) on PB0 and leave other values untouched
    } else
    {
        PORTB = ~(1 << led_pin) & PORTB; //Set 0V (0) on PB0 and leave other values untouched
    }
}
