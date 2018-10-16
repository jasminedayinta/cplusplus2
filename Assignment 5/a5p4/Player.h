//
//  Player.hpp
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
#include "GenericPlayer.h"

class Player : public GenericPlayer
{
public:
    Player(const string& name = "");
    
    virtual ~Player();
    
    //returns whether or not the player wants another hit
    virtual bool IsHitting() const;
    
    //announces that the player wins
    void Win() const;
    
    //announces that the player loses
    void Lose() const;
    
    //announces that the player pushes
    void Push() const;
};
