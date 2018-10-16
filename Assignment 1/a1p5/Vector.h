//
//  Vector.hpp
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

using namespace std;

class Vector{
    public:
        int size;
        double *c;
    
    public:
        //constructors
        Vector();
        Vector(double*, int i);
        Vector(const Vector&);
    
        ~Vector(); // destructor
    
        //setter methods
        void setSize(const int);
        void setComp(const double*);
    
        //getter methods
        int getSize();
        double getComp();
    
        //service methods
        void print();
        double z();
        Vector subtraction(const Vector&);
        Vector addition(const Vector&);
        double scalar(const Vector&);
        double norm();
        Vector operator*(const Matrix&);
    
        friend istream& operator>>(istream &input, Vector &v);
        friend ostream& operator<<(ostream &ouput, const Vector &v);
};
