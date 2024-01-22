#include <iostream>
class MyClass {
public:
    void myFunction() {
        std::cout << "Hallo aus myFunction!" << std::endl;
    }
};

int main() {
    MyClass obj;
    MyClass *ptr = &obj;

    // Mit dem Pfeiloperator auf myFunction zugreifen
    ptr->myFunction();

    return 0;
}