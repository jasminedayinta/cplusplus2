//
//  main.cpp
//  a6p2
//
//  Created by Jasmine Juwono on 13.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a6_p2.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <sstream>
using namespace std;

/*The *odds++ is not working properly because when
 I run the code, I can see that odds is not incrementing.
 It would always stay at 0 and to fix this, we would
 need to put a bracket: (*odds)++*/
void foo(int *array, int n, int *odds) {
    for(int i=0; i<n; i++)
        if (array[i] % 2 == 1)
           *odds++;
}

class Test {
private:
    double *a;
    int n;
public:
    Test() {
        a=NULL;
        n=0;
    }
    Test(double *a, int n) {
        this->n = n;
        if (this->a != NULL) {
            delete this->a;
        }
        this->a = new double[n];
        for(int i=0; i<n; i++)
            this->a[i] = a[i];
    }
    string toString() {
        ostringstream ss;
        ss << "Length: " << n << endl << "Elements: ";
        for(int i=0; i<n; i++)
            ss << a[i] << " ";
        ss << endl;
        return ss.str();
    }
    ~Test() {
        delete a;
    }
};

int main() {
    int array[3] = {1, 2, 3};
    int odd_values=0;
    foo(array, 3, &odd_values);
    cout << "Amount of odd values in the array=" << odd_values << endl;
    Test arr[5];
    double v[3] = {1.2, 2.3, 3.45};
    Test *obj1;
    obj1=&arr[0];
    Test *obj2 = new Test(v, 3);
    Test *obj3 = NULL;
    cout << obj1->toString();
    cout << obj2->toString();
    cout << obj3->toString(); /*Here, we are printing a null pointer,
                                which is not possible. I was able to
                               find this mistake by running through
                               each line with breakpoints and when
                               reaching line 72, it showed me an error
                               because line 69 shows it is NULL*/
    delete obj1; /*Here, we are deallocating something that
                    was never there in the first place. I noticed this
                  by looking back in the test function and noticed that
                  double *a was never allocated with any elements, so
                  nothing is going to be deallocated*/
    delete obj2;
    delete obj3;
    return 0;
}
