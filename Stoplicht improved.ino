int rood = 9;
int geel = 10;
int groen = 11; 

void setup(){
pinMode(rood, OUTPUT);
pinMode(geel, OUTPUT);
pinMode(groen, OUTPUT);
}

void loop(){

  digitalWrite(rood,LOW);
  digitalWrite(geel,LOW);
  digitalWrite(groen,HIGH);
  delay(5000);
 
  digitalWrite(rood,LOW);
  digitalWrite(geel,HIGH);
  digitalWrite(groen,LOW);
  delay(2000);

  digitalWrite(rood, HIGH);
  digitalWrite(geel, LOW);
  digitalWrite(groen, LOW);
  delay(10000);
}
