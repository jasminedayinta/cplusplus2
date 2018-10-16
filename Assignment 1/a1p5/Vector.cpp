//
//  Vector.cpp
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
#include <string>
#include "Matrix.h"
#include <cmath>

using namespace std;

//defining the constructors
Vector::Vector(){
    this->size = 0;
    this->c = NULL;
}

Vector::Vector(const Vector& v){
    this->size = v.size;
    this->c = new double[this->size];
    for(int i = 0; i < this->size; i++){
        this->c[i] = v.c[i];
    }
}

Vector::Vector(int &size, double *c){
    this->size = size;
    this->c = new double[this->size];
    for(int i = 0; i < this->size; i++){
        this->c[i] = c[i];
    }
}

//defining the destructor
Vector::~Vector(){
    delete [] this->c;
    this->size = 0;
}

//defining the getter methods
int Vector::getSize(){
    return this->size;
}

double* Vector::getComp(){
    return this->c;
}

//defining the setters
void Vector::setSize(int &size){
    this->size = size;
    delete [] this->c;
    this->c = new double[this->size];
    cout << "Values deleted \n" << endl;
}

void Vector::setComp(double *c, int &size){
    if(size != this->size){
        cout << "Cannot assign \n" << endl;
        return;
    }
    for(int i = 0;  i < this->size; i++){
        this->c[i] = c[i];
    }
}

//calling the service methods
void Vector::print(){
    for(int i = 0; i < this->size; i++){
        cout << this->c[i] << " " << endl;
    }
    cout << endl;
}

double Vector::z(){
    double res = 0;
    for(int i = 0; i < this->size; i++){
        res += this->c[i];
    }
    return sqrt(res);
}

Vector Vector::subtraction(const Vector &v){
    double *nc = new double[this->size];
    for(int i = 0; i < this->size; i++){
        nc[i] = this->c[i] - v.c[i];
    }
    return Vector(this->size, nc);
}

Vector Vector::addition(const Vector &v){
    double *nc = new double[this->size];
    for(int i = 0; i < this->size; i++){
        nc[i] = this->c[i] + v.c[i];
    }
    return Vector(this->size, nc);
}

double Vector::scalar(const Vector &v){
    double r = 0;
    for(int i = 0; i < this->size; i++){
        r += this->c[i]*v.c[i];
    }
    return r;
}

double Vector::norm(){
    int i;
    double n = 0;
    
    for(i = 0; i < size; i++){
        n = n+(c[i] * c[i]);
    }
    n = sqrt(n);
    return n;
}

Vector Vector::operator*(const Matrix& M){
    int i, j;
    Vector vt;
    
    vt.c = new double [M.r];
    for (i = 0; i < M.r; i++){
        for(j = 0; j < M.c; j++){
            vt.c[i]+=(M.matrix[i][j] * c[j]);
        }
    }
    vt.setSize(i);
    return vt;
}

istream& operator>>(istream &input, Vector &V){
    int i;
    V.c = new double[V.size];
    
    input >> V.size;
    
    for(i = 0; i < V.size; i++){
        input >> V.c[i];
    }
    return input;
}

ostream& operator<<(ostream &output, const Vector &V){
    int i;
    
    if(V.size == 0){
        cout << "Error! Can't be multiplied" << endl;
    }else{
        for(i = 0; i < V.size; i++){
            output << V.c[i];
            cout << endl;
        }
    }
    return output;
}

