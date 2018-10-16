//
//  Matrix.hpp
//  a1p5
//
//  Created by Jasmine Juwono on 26.03.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a1_p5.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "Vector.h"
#include <iostream>

using namespace std;

class Matrix{
    public:
        int r, c;
        double** matrix;
    
    public:
    Matrix();
    ~Matrix();
    void setRow(int);
    void setColumn(int);
    int getRow();
    int getColumn();
    int getMatrix(int, int);
    
    friend istream& operator>>(istream &input, Matrix &m);
    friend ostream& operator<<(ostream &output, Matrix &m);
    
};

