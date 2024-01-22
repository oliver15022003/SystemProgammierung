#include <iostream>
#include <string>

class Date {
public:
    Date(int d, int m, int y) {
        day = d; 
        month = m;
        year = y;  
    }
private:
    int day;
    int month;
    int year;
};

class Student {
public:
    Student(const std::string &n, const Date &b, double c):
    name(n), birthday(b), credits(c) {}

private:  
    std::string name;
    Date birthday;
    double credits;
};
