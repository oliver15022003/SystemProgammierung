#include <iostream>

using namespace std;

class Person {
public:
    Person() { cout << "\tPerson::Person" << endl; }

    Person( const string &n) : name(n) { cout << "\tPerson::Person(const string &)" << endl; }

    ~Person() { cout << "\tPerson::Person{}" << endl; }

    string toString() const { return string("(Person)name") + name; }
private:
    string name;
};

class Student : public Person {
public:
    Student() = default;

    Student(const string &name, const string &n) : Person(name), nick(n) {
        cout << "\tStudent::Student(const string &, const string &)" << endl;
    }

    ~Student() { cout << "\tStudent::~Student()" << endl; }
    string toString() const {return string("(Student)") + Person::toString() + " =>Nickname: " + nick;}

private:
    string nick;
};

int main() {
    Person p("Bob");
    cout << "p.toString" << p.toString() << endl << endl;
    Student s("Heinz", "heizer");

    cout << "vor block" << endl;
    {Student x;}
    cout << "nach block" << endl;

    return EXIT_SUCCESS;
}