//
//  main.cpp
//  a5p3
//
//  Created by Jasmine Juwono on 15.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a5_p3.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

class Motor{
public:
    Motor(){
        throw string("This motor has problems");
    }
    ~Motor(){};
};

class Car{
private:
    Motor *mo;
public:
    Car(){
        mo = new Motor();
    }
    ~Car(){
        delete mo;
    }
};

class Garage{
private:
    Car *c;
public:
    Garage(){
        try{
            c = new Car();
        }catch(string s){
            cout << s << endl;
            throw string("The car in this garage has problems with the motor");
        }
    };
    ~Garage(){
        delete c;
    };
};

int main() {
    try{
        Garage g;
    }catch(string s){
        cout << s;
    }
    return 0;
}
