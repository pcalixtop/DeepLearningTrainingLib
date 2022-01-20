#include "matrix.h"
#include <iostream>
#include <random>
#include <iomanip>

int Matrix::GetNum(int row, int col)const { return Mat[row][col]; };
int Matrix::GetRow()const { return (Mat.size()); };
int Matrix::GetColumn()const { return (Mat[0].size()); };

Matrix::Matrix(std::vector<std::vector<float> > mat) : Mat(mat) {
    for (auto it1 = Mat.begin(); it1 != Mat.end(); it1++) {
        for (auto it2 = it1->begin(); it2 != it1->end(); it2++) {

            std::random_device rd;  //Will be used to obtain a seed for the random number engine
            std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
            std::uniform_real_distribution<> distrib(0.0, 1.0);

            *it2 = distrib(gen);; // dereference iterator, set the value
        }
    }
}

void Matrix::Print()
{
    for (auto it1 = Mat.begin(); it1 != Mat.end(); it1++) {
        for (auto it2 = it1->begin(); it2 != it1->end(); it2++) {
            std::cout << std::setw(8) << *it2 << "\t";
        }
        std::cout << '\n';
    }
}

void Matrix::Clear()
{
    for (auto it1 = Mat.begin(); it1 != Mat.end(); it1++) {
        for (auto it2 = it1->begin(); it2 != it1->end(); it2++) {
            *it2 = 0; // dereference iterator, set the value
        }
    }
}