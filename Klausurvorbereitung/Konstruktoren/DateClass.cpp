#include <iostream>
#include <string>

using namespace std;

class Date{
public:
    Date() {
        cout << "\tKlasse Date, parameterloser Konstruktor" <<endl;
    }

    Date(string d) {
        cout << "\tKlasse Date, Konstruktor mit Parameter" << endl;
    }

    Date(const Date &d) {
        cout << "\tKlasse Date, Copy Konstruktor" << endl;
    }

    Date &operator = (const Date &d) {
        cout << "\tKlasse Date, Zuweisungsoperator" << endl;
        return *this;
    }
};

class Student {
public:
    // Konstruktor mit Initialisierungslisten
    Student(const std::string &n, const Date &b, double c):
    name(n), birthday(b), credits(c) {}

//private:  
    std::string name;
    Date birthday;
    double credits = 0.9;
};

int main() {
    Date d("01.01.2001");
    cout << endl << "Anlegen eines Studenten" << endl;
    Student a("Knabe", d, 9);
    cout << "Knabes Credits: " << a.credits << endl;

    return EXIT_SUCCESS;
}