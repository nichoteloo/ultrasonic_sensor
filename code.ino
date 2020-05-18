#define echoPin 2
#define trigPin 3

long waktu;
int jarak;

void setup(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.println("Alat Pengukur Jarak");
}

void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  waktu = pulseIn(echoPin,HIGH); // satuannya ms
  jarak = (waktu*0.034)/2;
  
  Serial.print("Jarak : ");
  Serial.print(jarak);
  Serial.println(" cm");
  Serial.print(jarak);
  Serial.println(" cm");
}
