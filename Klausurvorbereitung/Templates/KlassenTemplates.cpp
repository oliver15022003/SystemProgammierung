#include <iostream>
#include <vector> // Include vector header

template <typename T>
class Matrix {
public:
    Matrix(unsigned rows = 1, unsigned cols = 1);
    std::vector<std::vector<T> > xyField; // Use std:: before vector
};

// Define the constructor
template <typename T>
Matrix<T>::Matrix(unsigned rows, unsigned cols) : xyField(rows, std::vector<T>(cols)) {}

int main() {
    Matrix<int> m1;
    Matrix<double> m2(12, 3);
    return 0; // Add a return statement
}