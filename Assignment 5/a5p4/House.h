//
//  House.hpp
//  a5p4
//
//  Created by Jasmine Juwono on 16.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a5_p4.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <stdio.h>
#include "GenericPlayer.h"

class House : public GenericPlayer
{
public:
    House(const std::string& name = "House");
    
    virtual ~House();
    
    //indicates whether house is hitting - will always hit on 16 or less
    virtual bool IsHitting() const;
    
    //flips over first card
    void FlipFirstCard();
};
