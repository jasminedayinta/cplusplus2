//
//  Player.cpp
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
#include "Player.h"

Player::Player(const std::string& name):
GenericPlayer(name)
{}

Player::~Player()
{}

bool Player::IsHitting() const
{
    std::cout << m_Name << ", do you want a hit? (Y/N): ";
    char response;
    std::cin >> response;
    return (response == 'y' || response == 'Y');
}

void Player::Win() const
{
    std::cout << m_Name <<  " wins.\n";
}

void Player::Lose() const
{
    std::cout << m_Name <<  " loses.\n";
}

void Player::Push() const
{
    std::cout << m_Name <<  " pushes.\n";
}
