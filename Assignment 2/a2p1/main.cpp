//
//  main.cpp
//  a2p1
//
//  Created by Jasmine Juwono on 23.03.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*
 CH08-320143
 a2_p1.cpp
 Jasmine Dayinta
 jdayinta@jacobs-university.de
 */

#include <iostream>
using namespace std;

class Complex {

    private:
        double real, imaginary;

    public:
        Complex();
        ~Complex();
        Complex(double r, double i);
        bool operator<(const Complex& C);
        friend ostream &operator<<(ostream &output, const Complex &C);
};

Complex::Complex(){
    this->real = 0;
    this->imaginary = 0;
}

Complex::~Complex(){}

Complex::Complex(double r, double i){
    real = r;
    imaginary = i;
}

bool Complex::operator<(const Complex& C){
    return this->real < C.real && this->imaginary < C.imaginary;
}

ostream &operator<<(ostream &output, const Complex &C){
    output << C.real << C. imaginary << "i";
    return output;
}

template <class T>
T array_min(T min_array[], int size){
    int i;
    T smallest = min_array[0];
    
    for(i = 1; i < size; i++){
        if(min_array[i] < smallest){
            smallest = min_array[i];
        }
    }
    return smallest;
}

int main(){
    int int_arr[] = {5, 7, 3, 5, 1};
    double double_arr[] = {5.6, 2.3, 8.7, 9.8, 10.10};
    Complex complex_arr[] = {Complex(6, 7), Complex(7, 8), Complex(8, 9)};

    cout << array_min<int>(int_arr, 5) << endl;
    cout << array_min<double>(double_arr, 5) << endl;
    cout << array_min<Complex>(complex_arr, 3) << endl;
    
    return 0;
}
