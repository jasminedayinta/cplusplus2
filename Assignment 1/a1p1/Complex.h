//
//  Complex.hpp
//  a1p1
//
//  Created by Jasmine Juwono on 22.03.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a1_p1.cpp Complex.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>

using namespace std;

class Complex{
    
private:
    
    int real, imaginary;
    
public:
    
    //declaring constructors
    Complex();
    Complex(const int r, const int i);

    //declaring a destructor
    ~Complex();
    
    //overloading the order of operations
    Complex operator+(const Complex &a);
    Complex operator-(const Complex &a);
    Complex operator*(const Complex &a);
    
    //overloading the input and output streams
    friend istream &operator>>(istream &input, Complex &C);
    friend ostream &operator<<(ostream &output, const Complex &C);

};

