//
//  main.cpp
//  a5p2
//
//  Created by Jasmine Juwono on 12.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a5_p2.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <algorithm>
#include <exception>

using namespace std;

class OwnException{
private:
    string s;
public:
    const char *what() throw(){
        return "This is an OwnException";
    };
    OwnException(){}
    OwnException(string str){
        s = str;
    }
    virtual ~OwnException(){};
};

void cases(int i){
    switch(i){
        case 1:
            throw 'e';
            break;
        case 2:
            throw 99;
            break;
        case 3:
            throw false;
            break;
        default:
            throw OwnException("This is a default case exception");
            break;
    }
}

int main() {
    try{
        cases(1);
    }catch(const char c){
        cerr << "Exception caught in main: " << c << endl;
    }
    
    try{
        cases(2);
    }catch(int i){
        cerr << "Exception caught in main: " << i << endl;
    }
    
    try{
        cases(3);
    }catch(bool b){
        cerr << "Exception caught in main: " << b << endl;
    }
    
    try{
        cases(4);
    }catch(OwnException oe){
        cout << oe.what();
    }
    
    return 0;
}
