#include <Servo.h>
#define VRY_U A0
#define VRX_U A1
#define VRY_D A2
#define VRX_D A3

Servo Cintura;
Servo Hombro;
Servo Codo;
Servo Mano;

int lVRY_U;
int lVRX_U;
int lVRY_D;
int lVRX_D;

void setup (){
  Cintura.attach(6);
  Hombro.attach(7);
  Codo.attach(8);
  Mano.attach(9);
  pinMode (VRY_U, INPUT);
  pinMode (VRX_U, INPUT);
  pinMode (VRY_D, INPUT);
  pinMode (VRX_D, INPUT);
}
void loop(){
  lVRY_U = analogRead(VRY_U);
  lVRX_U = analogRead(VRX_U);
  lVRY_D = analogRead(VRY_D);
  lVRX_D = analogRead(VRX_D);
  lVRY_U= map(lVRY_U,0,1023,10,170);//cintura
  lVRX_U= map(lVRX_U,0,1023,30,31);//hombro
  lVRY_D= map(lVRY_D,0,1023,120,30);//codo
  lVRX_D= map(lVRX_D,0,1023,120,50);//mano

  Cintura.write(lVRY_U);
  Hombro.write(lVRX_U);
  Codo.write(lVRY_D);
  Mano.write(lVRX_D);
  delay(15);
  }
