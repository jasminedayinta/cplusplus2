//
//  Card.cpp
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

Card::Card(rank r, suit s, bool ifu):  m_Rank(r), m_Suit(s), m_IsFaceUp(ifu)
{}

int Card::GetValue() const
{
    int value;
    
    // to be filled with content
    
    return value;
}

void Card::Flip()
{
    m_IsFaceUp = !(m_IsFaceUp);
}

std::ostream& operator<<(std::ostream& os, const Card& aCard);

//overloads << operator so Card object can be sent to cout
std::ostream& operator<<(std::ostream& os, const Card& aCard)
{
    const std::string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9",
        "10", "J", "Q", "K"};
    const std::string SUITS[] = {"c", "d", "h", "s"};
    
    if (aCard.m_IsFaceUp)
    {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        os << "XX";
    }
    
    return os;
}
