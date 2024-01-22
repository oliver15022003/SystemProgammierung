#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Decider.h"


Decider::Decider() {
    // Initialisierung des Zufallszahlengenerators mit der aktuellen Zeit
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}
int Decider::getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Const stellt sicher das die Funktion die uebergebenen Parameter nicht aendern kann
// Die Referenz string& stellt sicher das mit den Originaldaten gearbeitet wird anstatt Kopien zu erstellen
std::string Decider::makeDecision(const std::string& a, const std::string& b) {
    int num = getRandomNumber(0,1);
    if (num == 0) {
        return a;
    } else return b;
}
