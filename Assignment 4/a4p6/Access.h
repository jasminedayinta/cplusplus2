//
//  Access.hpp
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

using namespace std;

class Access{
public:
    void activate(unsigned long code, unsigned int level);
    void deactivate(unsigned long code);
    bool isactive(unsigned long code, unsigned int level) const;
    
private:
    map<long, int>system;
};
