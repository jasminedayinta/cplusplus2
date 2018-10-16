//
//  Fraction.cpp
//  a6p4
//
//  Created by Jasmine Juwono on 16.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a6_p4.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include "Fraction.h"

Fraction::Fraction(){
    this->numerator = 1;
    this->denominator = 1;
    this->print();
}

Fraction::~Fraction(){}

Fraction::Fraction(const Fraction &frac){
    this->numerator = frac.numerator;
    this->denominator = frac.denominator;
    this->print();
}

Fraction::Fraction(int n, int d){
    this->numerator = n;
    this->denominator = d;
    this->print();
}

Fraction::Fraction(const std::string &s){
    int i, j;
    std::string str = s.substr(0, s.find("/"));
    std::string str2 = s.substr(s.find("/") + 1);
    
    i = atoi(str.c_str());
    j = atoi(str2.c_str());
    
    if((i < 0 && j > 0) || (i > 0 && j >0)){
        this->numerator = i;
        this->denominator = j;
    }else if((i < 0 && j < 0) || (i > 0 && j < 0)){
        this->numerator = -i;
        this->denominator = -j;
    }else if(j == 0){
        throw std::string("Invalid data or logical error");
    }else{
        this->numerator = 0;
    }
    this->print();
}

bool Fraction::operator<(const Fraction& frac){
    return((numerator * frac.denominator) < (denominator*frac.numerator));
}

bool Fraction::operator<=(const Fraction& frac){
    return((numerator * frac.denominator) <= (denominator*frac.numerator));
}

bool Fraction::operator>(const Fraction& frac){
    return((numerator * frac.denominator) > (denominator*frac.numerator));
}

bool Fraction::operator>=(const Fraction& frac){
    return((numerator * frac.denominator) >= (denominator*frac.numerator));
}

bool Fraction::operator==(const Fraction& frac){
    return((numerator * frac.denominator) == (denominator*frac.numerator));
}

bool Fraction::operator!=(const Fraction& frac){
    return((numerator * frac.denominator) != (denominator*frac.numerator));
}

Fraction Fraction::operator+(const Fraction &frac){
    Fraction f;
    f.numerator = this->numerator*frac.denominator + frac.numerator*this->denominator;
    f.denominator = this->denominator*frac.denominator;
    
    return f;
}

Fraction Fraction::operator-(const Fraction &frac){
    Fraction f;
    f.numerator = this->numerator*frac.denominator - frac.numerator*this->denominator;
    f.denominator = this->denominator*frac.denominator;
    
    return f;
}

Fraction Fraction::operator*(const Fraction &frac){
    Fraction f;
    f.numerator = this->numerator*frac.numerator;
    f.denominator = this->denominator*frac.denominator;
    
    return f;
}

Fraction Fraction::operator/(const Fraction &frac){
    Fraction f;
    f.numerator = this->numerator*frac.denominator;
    f.denominator = this->denominator*frac.numerator;
    
    return f;
}

Fraction Fraction::operator=(const Fraction &frac){
    Fraction f;
    f.numerator = frac.numerator;
    f.denominator = frac.denominator;
    
    return f;
}

std::ostream& operator<<(std::ostream &out, const Fraction& frac){
    out << frac.numerator << "/" << frac.denominator << std::endl;
    return out;
}

std::istream& operator>>(std::istream &in, Fraction& frac){
    int i, j;
    
    in >> i;
    in >> j;
    
    while(j == 0){
        std::cout << "Error! Denominator can't be zero" << std::endl;
        in >> j;
    }
    
    frac.numerator = i;
    frac.denominator = j;
    
    return in;
}

void Fraction::print(){
    std::cout << numerator << "/" << denominator << std::endl;
}

