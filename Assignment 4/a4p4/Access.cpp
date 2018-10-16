//
//  Access.cpp
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
#include <iterator>
#include <algorithm>
#include "Access.h"

using namespace std;

void Access::activate(unsigned long code){
    system.insert(code);
}

void Access::deactivate(unsigned long code){
    system.erase(code);
}

bool Access::isactive(unsigned long code) const{
    set<unsigned long>::iterator ite;
    
    for(ite = system.begin(); ite != system.end(); ite++){
        if(*ite == code){
            return true;
        }
    }
    return false;
}
