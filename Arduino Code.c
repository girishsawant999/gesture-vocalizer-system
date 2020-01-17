#include <SoftwareSerial.h>

#define RX    1 
#define TX    2 

#define flex1 A2
#define flex1 A3

#define Treshold 300

int led=0;

SoftwareSerial mySerial(RX, TX);

void setup() {
  pinMode(led, OUTPUT);
  mySerial.begin(9600);
}


void loop() {
  val1 = analogRead(flex1);
  val2 = analogRead(flex2);
  
  if (val1 > Treshold)
  {
    if (val2 > Threshold)
    {
     mySerial.println(3);
     digitalWrite(led, HIGH);
    }
    else
    {
      mySerial.println(1);
      digitalWrite(led, HIGH);
    }
  }
  else
  {
    if (val2 > Threshold)
    {
     mySerial.println(2);
     digitalWrite(led, HIGH); 
    }
    
  }
    
  
   
  delay(500);              
  digitalWrite(led, LOW);
  delay(500);
}
