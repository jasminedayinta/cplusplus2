//
//  main.cpp
//  a4p4
//
//  Created by Jasmine Juwono on 09.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a4_p4.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <set>
#include <algorithm>
#include "Access.h"

int main() {
    
    Access ac;
    unsigned long num;
    
    ac.activate(123456);
    ac.activate(999999);
    ac.activate(187692);

    while(1){
        cout << "Enter code:  ";
        cin >> num;
    
        if(ac.isactive(num) == true){
            ac.deactivate(num);
            cout << "Door opened succesfully" << endl;
        }else{
            cout << "Error! Door did not open!" << endl;
        }
    }
    
    ac.deactivate(999999);
    ac.deactivate(111111);
}
