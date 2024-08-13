int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

    buttonState = digitalRead(2);

    if (buttonState == HIGH) {
        // turn LED on:
        digitalWrite(12, HIGH);
    } else {
        // turn LED off:
        digitalWrite(12, LOW);
    }
}

void test() {
  digitalWrite(12, HIGH);
  delay(250);
  digitalWrite(12, LOW);
  delay(250);
}
