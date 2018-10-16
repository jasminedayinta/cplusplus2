//
//  Access.cpp
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
#include <iterator>
#include <algorithm>
#include "Access.h"

using namespace std;

void Access::activate(unsigned long code, unsigned int level){
    system[code] = level;
}

void Access::deactivate(unsigned long code){
    system[code] = -1;
}

bool Access::isactive(unsigned long code, unsigned int level) const{
    unsigned int n = system.find(code)->second;
    
    if(system.find(code) == system.end()){
        return false;
    }else if(n >= level){
       return true;
    }
    return false;
}
