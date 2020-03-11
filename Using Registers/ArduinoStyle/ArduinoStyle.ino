const int button_pin = 2;
const int led_pin = 0;

void setup() {
    pinMode(button_pin, INPUT_PULLUP);
    pinMode(led_pin, OUTPUT);
}

void loop() {

    int button = digitalRead(button_pin);

    if ( button == LOW ) {
        digitalWrite(led_pin, HIGH);
    } else
    {
        digitalWrite(led_pin, LOW);
    }

}