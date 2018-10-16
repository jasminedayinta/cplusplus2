//
//  main.cpp
//  a2p2
//
//  Created by Jasmine Juwono on 26.03.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a2_p2.cpp
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
    
    cout << "First element is: " << q.front() << " and last element is: " << q.back() << "\n" << endl;
    
    cout << "Number of elements in the queue is: " << q.getNumEntries() << "\n" << endl;
    
    q.items();
    q.pop();
    cout << "\n";
    
    cout << "First element is: " << q.front() << " and last element is: " << q.back() << "\n" << endl;
    
    cout << "Number of elements in the queue is: " << q.getNumEntries() << "\n" << endl;
    q.items();
    
    return 0;
}
