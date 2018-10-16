//
//  Hand.hpp
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
#include "Card.h"

class Hand
{
public:
    Hand();
    
    virtual ~Hand();
    
    //adds a card to the hand
    void Add(Card* pCard);
    
    //clears hand of all cards
    void Clear();
    
    //gets hand total value, intelligently treats aces as 1 or 11
    int GetTotal() const;
    
protected:
    std::vector<Card*> m_Cards;
};
