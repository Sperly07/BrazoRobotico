// pinza el maximo es 110
#include <Wire.h>
#include <Servo.h>

Servo servoBase;  
Servo servoBrazo; 
Servo servoAntebrazo;
Servo servoPinza;

void setup() {
 

  //inicializamos los servos;
  servoBase.attach(6);  
  servoBrazo.attach(7);  
  servoAntebrazo.attach(8);
  servoPinza.attach(9);
}
void loop(){
for(int i = 150; i >= 110; i--){
    servoBase.write(i);
    delay(25);
  }
 for(int i = 90; i >= 60; i--){
    servoAntebrazo.write(i);
    delay(25);
  }
  for(int i = 120; i >= 90; i--){
    servoBrazo.write(i);
    delay(25); 
  }
  

  
  for(int i = 120; i >= 0; i--){
    servoPinza.write(i);
    delay(25);
  }
  
  for(int i = 90; i <= 150; i++){
    servoBrazo.write(i);
    delay(25); 
  }
 
  for(int i = 60; i <= 120; i++){
    servoAntebrazo.write(i);
    delay(25);
  }
  
  for(int i = 150; i >= 100; i--){
    servoBrazo.write(i);
    delay(25); 
  }
  
  for(int i = 0; i <= 120; i++){
    servoPinza.write(i);
    delay(25);
  }
  for(int i = 120; i >= 90; i--){
    servoAntebrazo.write(i);
    delay(25);
  }
   for(int i = 100; i <= 150; i++){
    servoBrazo.write(i);
    delay(25); 
  }
}
