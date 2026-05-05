const int buttonPin = 2;  // the number of the pushbutton pin
int buttonState = 0;  // variable for reading the pushbutton status


void setup() {
    Serial.begin(9600);
    pinMode(buttonPin, INPUT);
}

void loop() {
    int light = analogRead(A0);
    int poti = analogRead(A1);
    Serial.println(poti);

//    Serial.println("Analog  Value: ");
    Serial.println(light);
    
    buttonState = digitalRead(buttonPin);
    Serial.println(buttonState);
      
    delay(250);
}
