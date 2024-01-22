#include <iostream>
#include "Decider.h"

int main() {
    Decider myDecider;
    std::string mystring = myDecider.makeDecision("Dog","Cat");
    std::cout << mystring << std::endl;
}