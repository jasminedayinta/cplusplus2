//
//  main.cpp
//  a4p5
//
//  Created by Jasmine Juwono on 08.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a4_p5.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <assert.h>
#include <string>

using namespace std;

int main() {
    map<string, string> M;
    string name;
    string matri;
    map<string, string>::const_iterator ite = M.find(name);
    
    ifstream fin;
    fin.open("data.txt");
    
    if(!fin.good()){
        cerr << "Error with file!" << endl;
        exit(1);
    }
    
    while(1){
        getline(fin, name, '\n');
        cout << name.length() << endl;
        getline(fin, matri, '\n');
        M[name] = matri;
        
        if(fin.eof()){
            break;
        }
    }
    
    while(1){
        cout << "Enter name: " << endl;
        getline(cin, name, '\n');
        if(ite == M.end()){
            cerr << "Name not found!" << endl;
        }else{
            cout << M[name] << endl;
        }
    }
    
    fin.close();
    
    return 0;
}
