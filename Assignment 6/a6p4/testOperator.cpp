//
//  testOperator.cpp
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
    Fraction frac5(1,2);
    Fraction frac6(2,3);
    Fraction frac7(frac6);
    Fraction frac8(5,6);
    
    run(frac7 == frac5);
    try{
        Fraction frac7("1/2");
        incorrect++;
    }catch(string &s){
        cout << s << endl;
        correct++;
    }try{
        Fraction frac7(2,0);
        incorrect++;
    }catch(string &s){
        cout << s << endl;
        correct++;
    }
    
    frac8 = Fraction(5,6);
    run(frac8 == Fraction(5,6));
    
    return 0;
}
