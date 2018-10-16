//
//  main.cpp
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
#include <string>
#include <algorithm>
#include <exception>
#include <sstream>
#include "Fraction.h"

using namespace std;

int correct = 0;
int incorrect = 0;

void run(bool b){
    if(b){
        correct++;
    }else{
        incorrect++;
    }
}

int main() {
    Fraction frac1(2,3);
    Fraction frac2(7,8);

    run(frac1+frac2 == Fraction(37, 24));
    run(frac1-frac2 == Fraction(20, 1));
    run(frac1*frac2 == Fraction(14, 24));
    run(frac1/frac2 == Fraction(1, 3));
    run(frac1+frac1 == Fraction(4, 3));
    run(frac2+frac2 == Fraction(3, 4));
    
    return 0;
}
