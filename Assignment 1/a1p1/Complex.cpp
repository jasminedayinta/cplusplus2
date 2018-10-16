//
//  Complex.cpp
//  a1p1
//
//  Created by Jasmine Juwono on 22.03.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a1_p1.cpp Complex.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

//defining constructor methods

Complex::Complex(){
    this->real = 0;
    this->imaginary = 0;
}

Complex::Complex(const int r, const int i){
    real = r;
    imaginary = i;
}

Complex::~Complex(){}

istream &operator>>(istream &input, Complex &C){
    input >> C.real >> C.imaginary;
    return input;
}

ostream &operator<<(ostream &output, const Complex &C){
    output << C.real << C. imaginary << "i";
    return output;
}

Complex Complex::operator+(const Complex &a){
    return Complex(this->real + a.real, this->imaginary + a.imaginary);
}

Complex Complex::operator-(const Complex &a){
    return Complex(this->real - a.real, this->imaginary - a.imaginary);
}

Complex Complex::operator*(const Complex &a){
    return Complex((this->real * a.real) - this->imaginary * a.imaginary, this->real * a.imaginary + a.real * this->imaginary);
}

