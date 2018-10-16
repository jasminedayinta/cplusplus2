//
//  main.cpp
//  a1p4
//
//  Created by Jasmine Juwono on 26.03.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a1_p4.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include<iostream>
using namespace std;

class A
{
    int x;
public:
    A(int i) { x = i; }
    void print() { cout << x; }
};

class B: virtual public A
{
public:
    B():A(10) {  }
};

class C:  virtual public A
{
public:
    C():A(10) {  }
};

class D: public B, public C {
public:
    D():A(10) { }
};

int main()
{
    D d;
    d.print();
    /*There is an error on line 45 because there is no constructor
     in class D, therefore we couldn't even create an object.
     There should be a constructor that is related to class A just like
     there are constructors in class B and class C, relating back to class A
     (and thus then they can use the print function in class A). This is why
     I added the constructor D():A(10 { } in class D.*/
    return 0;
}
