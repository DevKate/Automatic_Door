#include <Servo.h>
Servo dev;
int led=6;
int pir=2;
  
void setup()
{
 pinMode(pir,INPUT);
 pinMode(led,OUTPUT);
 dev.attach(9);
 Serial.begin(9600);

}

void loop()
{
 int val = digitalRead(pir);
 Serial.println(val);
  if (val==HIGH){
     digitalWrite(led,HIGH);
     dev.write(100);
 }
  else{
    digitalWrite(led,LOW);
    dev.write(10);
  }
  
 delay(10);
}