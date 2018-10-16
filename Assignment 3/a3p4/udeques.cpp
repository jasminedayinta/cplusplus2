//
//  main.cpp
//  a3p4
//
//  Created by Jasmine Juwono on 06.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a3_p4.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <deque>
#include <cstdlib>

using namespace std;

int main() {
    deque<double> A;
    double num;
    deque<double>::const_iterator ite;
    deque<double>::const_iterator ite2;
    
    while(1){
        cout << "Enter (double) number: ";
        cin >> num;
        
        if(num > 0){
            A.push_front(num);
        }else if(num < 0){
            A.push_back(num);
        }else{
            break;
        }
    }
    cout << endl;
    
    cout << "Deque A: ";
    for(ite = A.begin(); ite != A.end(); ite++){
        cout << *ite << " ";
    }
    cout << endl;
    cout << endl;
    
    ite2 = A.begin();
    
    for(ite2 = A.begin(); ite2 != A.end() - 1; ++ite2){
        if(*ite2 < 0){
            A.insert(ite2, 0);
            break;
        }
    }
    
    for(ite = A.begin(); ite != A.end(); ite++){
        if(ite == --A.end()){
            cout << *ite;
        }else{
            cout << *ite << "; ";
        }
    }
    cout << endl;
    
    return 0;
}
