//
//  main.cpp
//  a6p1
//
//  Created by Jasmine Juwono on 13.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a6_p1.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
using namespace std;

int find(int a[], int nr, int el) {
    for(int i=0; i<=nr; i++)
        if (a[i] == el)
            return i;
    return -1;
}

unsigned long difference(unsigned long a, unsigned long b) {
    if (a-b < 0)
        /*There is an error in the if statement because
         both variables a and b are unsigned but the comparison
         a-b < 0 will always be false. Therefore, we need to put
         the signed before the a-b*/
        return b-a;
    else
        return a-b;
}

int main() {
    int n, val;
    cout << "n=";
    cin >> n;
    int *v=new int[n];
    cout << "Elements the elements of array:" << endl;
    for(int i=0; i<n; i++)
        cin >> v[i];
    cout << "val=";
    cin >> val;
    int result = find(v, n, val);
    cout << "Position of the searched element=" << result << endl;
    delete v; /*wrong syntax as we need to write v[], therefore it was
    shown from the debugger that it was not properly deallocated*/
    unsigned long x, y;
    x=550000;
    y=550005;
    cout << "Difference=" << difference(x, y) << endl;
    return 0;
}
