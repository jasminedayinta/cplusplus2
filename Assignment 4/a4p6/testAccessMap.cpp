//
//  main.cpp
//  a4p6
//
//  Created by Jasmine Juwono on 09.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a4_p6.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <map>
#include <algorithm>
#include "Access.h"

int main() {
    
    Access ac;
    unsigned long num, num2;
    int i = 1;
    ac.activate(123456, 1);
    ac.activate(999999, 5);
    ac.activate(187692, 9);
    
    while(i){
        cout << "Enter code:  ";
        cin >> num;
        
        if(ac.isactive(num, 5) == true){
            ac.deactivate(num);
            cout << "Door opened succesfully" << endl;
            ac.activate(999999, 8);
            ac.activate(111111, 7);
            i = 0;
        }else{
            cout << "Error! Door did not open!" << endl;
        }
    }
    
    while(1){
        cout << "Enter code:  ";
        cin >> num2;
        
        if(ac.isactive(num2, 7) == true){
            cout << "Door opened succesfully" << endl;
        }else{
            cout << "Error! Door did not open!" << endl;
        }
    }
}
