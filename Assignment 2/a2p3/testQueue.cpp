//
//  main.cpp
//  a2p3
//
//  Created by Jasmine Juwono on 03.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a2_p3.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue<int> q;
    
    q.push(7);
    q.push(11);
    q.push(19);
    q.push(22);
    
    cout << "First element is: " << q.front() << " and last element is: " << q.back() << "\n" << endl;
    
    cout << "Number of elements in the queue is: " << q.getNumEntries() << "\n" << endl;
    
    q.items();
    q.resize(2);
    
    cout << "\n";
    
    q.items();
    
    cout << "\n";
    
    cout << "Size of queue is: " << q.getSize() << endl;
    
    return 0;
}

