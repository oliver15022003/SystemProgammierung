#include <iostream>

class Pen{
  private:
    std::string color;
    int size;

  public:
    //Konstruktor
    Pen(std::string color = "Red", int size = 27){
      this->color = color;
      this->size  = size ;
    }

    void draw(std::string shape){
      std::cout << "Drawing a " << color.c_str() << " "
      << shape.c_str() << " with size " << this->size 
      << std::endl;
    }

};

int main(void){
  Pen pen("Blue", 50);
  pen.draw("Triangle");

  return 0;
}