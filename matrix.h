#ifndef MATRIX_H
#define MATRIX_h

#include <vector>
//using namespace std;

#include <iostream>
#include <random>
#include <iomanip>
#include <algorithm>

class Matrix {
    public:
        Matrix() = delete;
        Matrix(std::vector<std::vector<float> > mat);
        ~Matrix() {}

        int GetNum(int row, int col) const;
        int GetRow()const;
        int GetColumn()const;
        void Print();
        void Clear();

    private:
        std::vector<std::vector<float> > Mat;
};
#endif
