void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

 int a = 8; // my pin 1 &0 does not really work
 int b = 2;
 int c = 3;
 int d = 4;
 int e = 5;
 int f = 6;
 int g = 7;


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(a, LOW); //9
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1500);
  digitalWrite(e, LOW); //8
  delay(1500);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);//7
  digitalWrite(d,HIGH);
  digitalWrite(e, HIGH);
  delay(1500);
  digitalWrite(b, HIGH);
  digitalWrite(f, LOW);//6
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
  delay(1500);
  digitalWrite(e,HIGH); //5
  delay(1500);
  digitalWrite(a, HIGH);//4
  digitalWrite(d, HIGH);
  digitalWrite(b, LOW);
  delay(1500);
  digitalWrite(f, HIGH); //3 
  digitalWrite(a, LOW);
  digitalWrite(d, LOW);
  delay(1500);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);//2
  delay(1500);
  digitalWrite(a, HIGH); //1
  digitalWrite(g, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, LOW);
  delay(1500);
  digitalWrite(a, LOW);
  digitalWrite(f, LOW); // 0
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  delay(1500); 
}
