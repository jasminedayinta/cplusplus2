//
//  main.cpp
//  a5p4
//
//  Created by Jasmine Juwono on 15.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a5_p4.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

//Blackjack

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Game.h"

int main()
{
    std::cout << "\t\tWelcome to Blackjack!\n\n";
    
    int numPlayers = 0;
    while (numPlayers < 1 || numPlayers > 7)
    {
        std::cout << "How many players? (1 - 7): ";
        std::cin >> numPlayers;
    }
    
    std::vector<std::string> names;
    std::string name;
    for (int i = 0; i < numPlayers; ++i)
    {
        std::cout << "Enter player name: " << std::endl;
        std::cin >> name;
        names.push_back(name);
    }
    std::cout << std::endl;
    
    //the game loop
    Game aGame(names);
    char again = 'y';
    while (again != 'n' && again != 'N')
    {
        aGame.Play();
        std::cout << "\nDo you want to play again? (Y/N): ";
        std::cin >> again;
    }
    
    return 0;
}


