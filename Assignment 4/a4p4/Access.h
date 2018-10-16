//
//  Access.hpp
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

using namespace std;

class Access{
public:
    void activate(unsigned long code);
    void deactivate(unsigned long code);
    bool isactive(unsigned long code) const;
    
private:
    long code;
    set<unsigned long>system;
};
