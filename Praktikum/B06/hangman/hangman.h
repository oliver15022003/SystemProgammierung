/* ====== HANGMAN.H ====== */

#ifdef __cplusplus
extern "C" {
#endif

#ifndef HANGMAN_H // Header Guard, um Mehrfachinkludierung zu vermeiden
#define HANGMAN_H

#include <string>
    namespace hangman {
        
        enum class Subject{
            Animals,
            Cars,
            Videogames,
            Softdrinks,
            Wuppi,
            Fluppi
        };
        enum class Difficulty{
            Easy = 15,
            Normal = 10,
            Hard = 5,
            Extrem = 1
        };
        class WordQuiz{
            public:
                // Default Konstruktor
                WordQuiz() = default;

                // Kopie Konstruktor
                WordQuiz(const WordQuiz&);
                
                void playgame(int wordLength,int parameter, Subject subject , Difficulty difficulty);
        
        };
        class WordList : public WordQuiz {
            private:
                Subject subject;
            public:
                WordList() = default;
                WordList(Subject subject, const WordList&);

                void addWord(const std::string&);
                const std::string& getRandomWord();
                const std::string& getWordOfLength(int a);
                Subject getSubject();


        };
        class QuizWord{
            private:
                std::string word;
                int length;
            public:
                QuizWord() = default;
                QuizWord(const std::string&, const QuizWord&);

                const std::string& getWord();
                int getLength();
        };

    }
#endif //HANGMAN_H


#ifdef __cplusplus
}
#endif