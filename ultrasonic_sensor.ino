#define trig 2
#define echo 4

void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW); 

  long t = pulseIn(echo, HIGH);


  long in = t / 74 / 2;

  Serial.print(in);
  Serial.println("in \t");
}
