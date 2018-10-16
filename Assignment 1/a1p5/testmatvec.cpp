//
//  main.cpp
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
#include <fstream>
#include "Vector.h"
#include "Matrix.h"

using namespace std;

int main() {
    Vector vect;
    Matrix mat;
    
    ifstream file1, file2;
    ofstream fout;
    
    file1.open("in1.txt");
    file2.open("in2.txt");
    fout.open("output.txt");
    
    if(file1.bad()){
        cout << "Can't open file!" << endl;
    }
    
    if(file2.bad()){
        cout << "Can't open file!" << endl;
    }
    
    if(fout.bad()){
        cout << "Can't open file!" << endl;
    }
    
    file1 >> vect;
    file2 >> mat;
    fout << vect << endl;
    fout << mat << endl;
    
    file1.close();
    file2.close();
    fout.close();
    
    return 0;
}
