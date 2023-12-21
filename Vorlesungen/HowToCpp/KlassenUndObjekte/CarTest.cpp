// ====== CARTEST_CPP ======

#include "Car.h"

int main(void){
  Car car;
  car.accelerate(2.8f);
  car.move(3.0f);
  std::cout << "isMoving: " << car.isMoving() << std::endl;
  car.brake();
  std::cout << "isMoving: " << car.isMoving() << std::endl;
  std::cout << "Position: " << car.getPos() << std::endl;

  return 0;
}