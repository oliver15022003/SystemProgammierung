#include <iostream>

// Vergleichfunktion fuer zwei Integer
bool cmp(const int &a, const int &b){
    return a<b;
}

// Funktionstemplate
template <typename T>
bool cmp(const T &a, const T &b){
    return a<b;
}

int main(void){
    int a = 3;
    int b = 3;
    std::string astr = "hello";
    std::string bstr = "world";

    std::cout << cmp(3,3) << std::endl;
    std::cout << cmp(astr,bstr) << std::endl;
}