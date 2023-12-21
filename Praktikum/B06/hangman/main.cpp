// ====== MAIN_CPP ====== */

#include "hangman.h"

using namespace hangman;

int main(){
    
    // Erstelle Objekte
    WordQuiz quiz;

    // Parameter setzen
    int wordLength = 5;
    int parameter = 4;
    Subject subject = Subject::Animals;
    Difficulty difficulty = Difficulty::Easy;

    // Starte das Spiel
    quiz.playgame(5, 4, subject, difficulty);

    return 0;
}


