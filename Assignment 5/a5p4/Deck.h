//
//  Deck.hpp
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

class Deck : public Hand
{
public:
    Deck();
    
    virtual ~Deck();
    
    //create a standard deck of 52 cards
    void Populate();
    
    //shuffle cards
    void Shuffle();
    
    //deal one card to a hand
    void Deal(Hand& aHand);
    
    //give additional cards to a generic player
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};
