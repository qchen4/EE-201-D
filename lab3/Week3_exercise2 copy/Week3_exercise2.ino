void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW); // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);// turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
