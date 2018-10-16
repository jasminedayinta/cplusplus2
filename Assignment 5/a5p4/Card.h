//
//  Card.hpp
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

class Card
{
public:
    enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
        JACK, QUEEN, KING};
    enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
    
    //overloading << operator so can send Card object to standard output
    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);
    
    Card(rank r = ACE, suit s = SPADES, bool ifu = true);
    
    //returns the value of a card, 1 - 11
    int GetValue() const;
    
    //flips a card; if face up, becomes face down and vice versa
    void Flip();
    
private:
    rank m_Rank;
    suit m_Suit;
    bool m_IsFaceUp;
};
