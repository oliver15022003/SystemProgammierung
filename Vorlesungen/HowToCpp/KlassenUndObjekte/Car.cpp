// ====== CAR_CPP ======

#include "Car.h"

//Methoden der Klasse Car werden hier deklariert
void Car::move(float time){
  pos += velocity * time;
}
void Car::accelerate(float newVelocity){
  velocity = newVelocity;
}
void Car::brake(){
  velocity = 0;
}
bool Car::isMoving(){
  return velocity != 0;
}