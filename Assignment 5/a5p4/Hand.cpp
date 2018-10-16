//
//  Hand.cpp
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
#include "Card.h"

Hand::Hand()
{
    m_Cards.reserve(7);
}

Hand::~Hand()
{
    Clear();
}

void Hand::Add(Card* pCard)
{
    m_Cards.push_back(pCard);
}

void Hand::Clear()
{
    //iterate through vector, freeing all memory on the heap
    std::vector<Card*>::iterator iter = m_Cards.begin();
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        delete *iter;
        *iter = 0;
    }
    //clear vector of pointers
    m_Cards.clear();
}

int Hand::GetTotal() const
{
    int total;
    
    // to be filled with content
    
    return total;
}
