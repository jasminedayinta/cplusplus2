//
//  testIO.cpp
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

int main(){
    Fraction frac3(2,5);
    Fraction frac4(8,9);
    
    stringstream fout;
    fout << frac3;
    run(fout.str() == "7/4\n");
    stringstream fin;
    fin << "7 4";
    fin >> frac4;
    run(frac4 == Fraction(7, 4));
    
    return 0;
}
