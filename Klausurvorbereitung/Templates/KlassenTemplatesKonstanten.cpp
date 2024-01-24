#include <iostream>
#include <vector>

template <typename T, unsigned rows, unsigned cols>
class Matrix {
public:
    Matrix();
    std::vector<std::vector<T> > xyField;
};

int main() {
    Matrix<int, 1, 1> m1;
    Matrix<double, 12, 3> m2;
    Matrix<std::string, 1, 1> m3;

    return EXIT_SUCCESS;
}

// Definition of the constructor
template <typename T, unsigned rows, unsigned cols>
Matrix<T, rows, cols>::Matrix() : xyField(rows, std::vector<T>(cols)) {}
