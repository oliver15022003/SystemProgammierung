/// STUDI_CPP ///

#include "studi.h"
#include <iostream>

// Konstruktor fuer Studi
Studi::Studi(int cps, const Name &n) : name(n), ects(cps) {}

// Kopierkonstruktor fuer Studi
Studi::Studi(const Studi &other): name(other.name), ects(other.ects) {}

//Destruktor fuer Studi
Studi::~Studi() {
    // Dynamisch Allokierte Ressourcen hier loeschen
}

// Kopierzuweisungsoperator fuer Studi
Studi& Studi::operator = (const Studi &other) {
    if(this != &other) {
        name = other.name;
        ects = other.ects;
    }

    return *this;
}

// Grading Methode
void Studi::grading(int points) {
    // ...
}

void print_ects(const Studi &s){
    std::cout << "ECTS: " << s.ects << std::endl;
}

int main() {
    Studi heinz(20, Name("Heinz")), holger,
    &lilly = heinz, *beate = new Studi(holger);

    print_ects(heinz);

    delete beate;

    return 0;
}