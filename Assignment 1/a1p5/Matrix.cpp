//
//  Matrix.cpp
//  a1p5
//
//  Created by Jasmine Juwono on 26.03.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a1_p5.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "Matrix.h"
#include "Vector.h"

Matrix::Matrix(){
    r = 0;
    c = 0;
}

Matrix::~Matrix(){
    int i;
    for(i = 0; i < c; i++){
        delete[] matrix[i];
    }
    delete[]matrix;
}

int Matrix::getRow(){
    return this->r;
}

void Matrix::setRow(int r){
    r = r;
}

void Matrix::setColumn(int c){
    c = c;
}
int Matrix::getColumn(){
    return this->c;
}

int Matrix::getMatrix(int r, int c){
    return this->matrix[r][c];
}

istream& operator>>(istream &input, Matrix &m){
    int n, o;
    
    input >> m.r >> m.c;
    m.matrix = new double*[m.r];
    
    for(n = 0; n < m.r; n++){
        for(o = 0; o < m.c; o++){
            input >> m.matrix[n][o];
        }
    }
}

ostream& operator<<(ostream &output, Matrix &m){
    int n, o;
    
    for(n = 0; n < m.r; n++){
        for(o = 0; o < m.c; o++){
            output << m.matrix[n][o] << " ";
        }
        output << endl;
    }
    return output;
}
