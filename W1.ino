#include "SR04.h"
#define TRIG_PIN A2
#define ECHO_PIN A3
int ENA = 3;
int IN1 = 4;
int IN2 = 5;
int ENB = 9;
int IN3 = 6; 
int IN4 = 7;

SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN) ;
long a;    

void setup() {
 Serial.begin (9600);
 a=sr04.Distance();
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
  digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW); 
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);
 analogWrite (ENA, 200);

 delay(100);
}

void adelante(){
   digitalWrite(IN3,HIGH);
 digitalWrite(IN4, LOW);
 
  

  delay(1350);
  
}
void gira_izquierda(){   
delay(50);  
}
void gira_derecha(){
  
 
}

void loop() {    
a=sr04.Distance();
Serial.print(a);
Serial.println("cm");
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
delay (1);
if(a<=10){
  gira_izquierda();
  delay(250); 
//  gira_derecha();
// delay(175); 
}else {
  gira_derecha(); 
  }

adelante();
delay(50);
 

}
