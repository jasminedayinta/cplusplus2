//
//  GenericPlayer.hpp
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
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Hand.h"

class GenericPlayer : public Hand
{
    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);
    
public:
    GenericPlayer(const string& name = "");
    
    virtual ~GenericPlayer();
    
    //indicates whether or not generic player wants to keep hitting
    virtual bool IsHitting() const = 0;
    
    //returns whether generic player has busted - has a total greater than 21
    bool IsBusted() const;
    
    //announces that the generic player busts
    void Bust() const;
    
protected:
    string m_Name;
};

