//
//  main.cpp
//  a1p3
//
//  Created by Jasmine Juwono on 22.03.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a1_p3.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/


#include <iostream>
using namespace std;

class A
{
    int x;
public:
    void setX(int i) {x = i;}
    void print() { cout << x; }
};

/*We should make class B virtual in order to
 avoid ambiguity becaues then we would only
 have 1 subclass from class A.*/
class B:  public virtual A
{
public:
    B()  { setX(10); }
};

class C:  public virtual A //class C should be virtual too
{
public:
    C()  { setX(20); }
};

class D: public B, public C {
};

int main()
{
    D d;
    d.print();
    /*When executing the d.print() on line 45, it gives an error
     because it is ambiguous. It is ambiguous because d belongs
     to the class D, however, it is calling the print function from
     class A, which class D is not a subclass of class A.*/
    return 0;
}

