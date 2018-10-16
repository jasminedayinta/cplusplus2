//
//  main.cpp
//  a4p2
//
//  Created by Jasmine Juwono on 06.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a4_p2.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <algorithm>
#include <set>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    set<int> s;
    set<int>::const_iterator ite;
    srand((unsigned)time(0));
    int randnum;
    
    while(s.size() < 6){
        randnum = rand() % 49 + 1;
        s.insert(randnum);
    }
    
    for(ite = s.begin(); ite != s.end(); ite++){
        cout << *ite << " ";
    }
    cout << endl;
    
    return 0;
}
