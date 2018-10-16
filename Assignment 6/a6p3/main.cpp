//
//  main.cpp
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
    Fraction frac3(2,5);
    Fraction frac4(8,9);
    Fraction frac5(1,2);
    Fraction frac6(2,3);
    Fraction frac7(frac6);
    Fraction frac8(5,6);
    
    run(frac1<frac2);
    run(frac1<=frac2);
    run(frac1>frac2);
    run(frac1>=frac2);
    run(frac1==frac2);
    run(frac1!=frac2);
    
    run(frac1+frac2 == Fraction(37, 24));
    run(frac1-frac2 == Fraction(20, 1));
    run(frac1*frac2 == Fraction(14, 24));
    run(frac1/frac2 == Fraction(1, 3));
    run(frac1+frac1 == Fraction(4, 3));
    run(frac2+frac2 == Fraction(3, 4));
    
    stringstream fout;
    fout << frac3;
    run(fout.str() == "7/4\n");
    stringstream fin;
    fin << "7 4";
    fin >> frac4;
    run(frac4 == Fraction(7, 4));
    
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
