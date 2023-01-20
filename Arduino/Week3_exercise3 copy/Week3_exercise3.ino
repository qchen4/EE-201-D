void setup() {
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(0, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(0);
  // print out the state of the button:
    if (buttonState == 1) {
      Serial.println("Hello World");
    } 
    else if (buttonState == 0) {
      Serial.println("It's 2023");
    }
  delay(100);      
}
