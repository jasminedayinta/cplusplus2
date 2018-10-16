//
//  Fraction.hpp
//  a6p3
//
//  Created by Jasmine Juwono on 16.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a6_p3.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>

using namespace std;

class Fraction{
private:
    int numerator, denominator;
    std::string fraction;
    
public:
    Fraction();
    ~Fraction();
    Fraction(const Fraction&);
    Fraction (int, int = 1);
    Fraction(const std::string&);
    
    bool operator<(const Fraction&);
    bool operator<=(const Fraction&);
    bool operator>(const Fraction&);
    bool operator>=(const Fraction&);
    bool operator==(const Fraction&);
    bool operator!=(const Fraction&);
    
    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction operator=(const Fraction&);
    
    friend std::ostream& operator<<(std::ostream&, const Fraction&);
    friend std::istream& operator>>(std::istream&, Fraction&);
    
    void print();
};



