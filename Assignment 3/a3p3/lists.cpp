//
//  main.cpp
//  a3p3
//
//  Created by Jasmine Juwono on 06.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*
 CH08-320143
 a3_p3.cpp
 Jasmine Dayinta
 jdayinta@jacobs-university.de
 */

#include <iostream>
#include <list>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    list<int> A;
    list<int> B;
    int num, temp, temp2;
    list<int>::const_iterator ite;
    list<int>::const_iterator ite2;
    ofstream fout("listB.txt", ios::out|ios::binary);
    
    while(1){
        cout << "Enter integer: ";
        cin >> num;
        
        if(num <= 0){
            break;
        }
        
        A.push_front(num);
        B.push_back(num);
    }
    cout << endl;
    
    //printing list A
    cout << "List A: ";
    for(ite = A.begin(); ite != A.end(); ite++){
        cout << *ite << " ";
    }
    cout << endl;
    
    if(!fout.good()){
        cout << "Error with file!" << endl;
        exit(1);
    }else{
        for(ite = B.begin(); ite != B.end(); ite++){
            fout << *ite << " ";
        }
    }
    //printing empty line
    cout << endl;
    fout.close();
    
    //moving last element to the beginning
    temp = A.back();
    A.push_front(temp);
    A.pop_back();
    
    temp2 = B.back();
    B.push_front(temp2);
    B.pop_back();
    
    cout << "Updated List A: ";
    for(ite = A.begin(); ite != A.end(); ite++){
        if(ite == --A.end()){
            cout << *ite;
        }else{
            cout << *ite << ", ";
        }
    }
    cout << endl;
    
    cout << "Updated List B: ";
    for(ite2 = B.begin(); ite2 != B.end(); ite2++){
        if(ite2 == --B.end()){
            cout << *ite2;
        }else{
            cout << *ite2 << ", ";
        }
    }
    cout << endl;
    
    //merging list A into list B
    cout << endl;
    B.merge(A);
    B.sort();
    
    cout << "Merge sorted list: ";
    for(ite = B.begin(); ite != B.end(); ite++){
        if(ite == --B.end()){
            cout << *ite;
        }else{
            cout << *ite << " ";
        }
    }
    cout << endl;
    
    return 0;
}
