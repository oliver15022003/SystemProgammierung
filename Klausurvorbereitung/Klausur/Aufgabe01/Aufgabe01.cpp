#include <iostream>
using namespace std;

class A {
public:
    A(){cout << "A";}
    A(int a){cout << "B";}
    //Kopier Konstruktor
    A(const A &a){cout << "C";}
    const A &operator = (const A &a){
        cout << "D";
        return *this;
    }
};

class C: public A {
public:
    C(const A &x){a = x; cout << "E";}
private:
    A a;
};

class D: public A {
public:
    D(const A &x) : a(x){cout << "F";}
private:
    A a;
};

int main(){
    A a;     cout << endl;
    A b = a; cout << endl;
    C c(a);  cout << endl;
    D d(a);  cout << endl;
}
