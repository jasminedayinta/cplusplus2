//
//  testcomplex.cpp
//  a1p1
//
//  Created by Jasmine Juwono on 22.03.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a1_p1.cpp testcomplex.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "Complex.h"
#include <fstream>

using namespace std;

int main(){
    
    Complex x, x2;
    
    ifstream fin, fin2;
    ofstream fout;
    
    fin.open("in1.txt");
    fin2.open("in2.txt");
    fout.open("output.txt");
    
    if(!fin){
        cout << "File not found!" << endl;
        exit(1);
    }
    
    if(!fin2){
        cout << "File not found!" << endl;
        exit(1);
    }
    
    if(!fout){
        cout << "File not found!" << endl;
        exit(1);
    }
    
    fin >> x;
    fin2 >> x2;

    fout << x+x2 << endl;
    fout << x-x2 << endl;
    fout << x*x2 << endl;
    
    cout << x+x2 << endl;
    cout << x-x2 << endl;
    cout << x*x2 << endl;
    
    fin.close();
    fin2.close();
    fout.close();
    
    
    return 0;
}

