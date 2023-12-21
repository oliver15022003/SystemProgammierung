// ====== CAR_H ======

#include <iostream>

class Car{
  private:
    float pos = 0;
    float velocity = 0;
  public:
    //Methoden der Klasse Car werden hier definiert
    void move(float time);
    void accelerate(float newVelocity);
    void brake();
    bool isMoving();

    //Setter und Getter
    float getPos(){
      return this->pos;
    }
    float setPos(float position){
      this->pos = pos;
    }
};