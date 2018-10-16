//
//  main.cpp
//  a2p4
//
//  Created by Jasmine Juwono on 03.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a2_p4.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList <int> *li;
    
    li = NULL;
    li = li->pushFront(6);
    li = li->pushFront(9);
    li = li->pushFront(13);
    li = li->pushBack(19);
    li = li->pushBack(25);
    
    cout << "List: ";
    li->valueinList();
    cout << "\n";
    cout << "First element is: ";
    li->returFirst();
    cout<< "Last element is: ";
    li->returLast();
    cout << "\n";
    
    li = li->removeBack();
    li = li->removeFront();
    
    cout << "New first element is: ";
    li->returFirst();
    cout<< "New last element is: ";
    li->returLast();
    cout << "\n";
    cout << "New list: ";
    li->valueinList();
    cout << "\n";
    cout << "Number of elements in the list: ";
    li->returAmount();
    cout << "\n";
    
    return 0;
}

