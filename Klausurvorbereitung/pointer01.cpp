#include <iostream>

int doSomething(int *num){
    return *num + *num;
}

int main(){
    int num = 5;
    std::cout << doSomething(&num);

    return 0;
}