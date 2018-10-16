//
//  main.cpp
//  a4p3
//
//  Created by Jasmine Juwono on 06.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a4_p3.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;

int main() {
    set<int> A;
    set<int> inter;
    set<int> diff;
    set<int> sym;
    multiset<int> B;
    int num;
    set<int>::iterator st;
    multiset<int>::iterator multi;
    multiset<int> uni(B);
    
    while(1){
        cout << "Enter integer: ";
        cin >> num;
        
        if(num < 0){
            break;
        }
        
        A.insert(num);
        B.insert(num);
    }
    
    cout << "Set A: ";
    for(st = A.begin(); st != A.end(); st++){
        cout << *st << " ";
    }
    cout << endl;
    
    cout << "\nMultiset B: ";
    for(multi = B.begin(); multi != B.end(); multi++){
        cout << *multi << " ";
    }
    cout << endl;
    
    A.erase(11);
    B.erase(11);
    
    cout << "\nSet A(2): ";
    for(st = A.begin(); st != A.end(); st++){
        cout << *st << " ";
    }
    cout << endl;
    
    cout << "\nMultiset B(2): ";
    for(multi = B.begin(); multi != B.end(); multi++){
        cout << *multi << " ";
    }
    cout << endl;
    
    A.insert(5);
    A.insert(421);
    
    uni.insert(A.begin(), A.end());
    
    cout << "\nThe union of A and B: ";
    for(auto n : uni){
        cout << n << " ";
    }
    cout << endl;
    
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(inter, inter.begin()));
    
    cout << "The intersection of A and B: ";
    for(auto n : uni){
        cout << n << " ";
    }
    cout << endl;
    
    set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(diff, diff.begin()));
    
    cout << "The difference between A and B: ";
    for(auto n : diff){
        cout << n << " ";
    }
    cout << endl;
    
    set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(sym, sym.begin()));
    
    cout << "The symmetric difference between A and B: ";
    for(auto n : sym){
        cout << n << " ";
    }
    cout << endl;
    
    return 0;
}
