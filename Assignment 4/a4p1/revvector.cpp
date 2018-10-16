//
//  main.cpp
//  a4p1
//
//  Created by Jasmine Juwono on 06.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a4_p1.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<char> ch;
    vector<char>::const_iterator ite, ite2;
    int i;
    
    for(i = 0; i < 26; i++){
        ch.push_back('a' + i);
    }
    
    reverse(ch.begin(), ch.end());
    
    cout << "Reversed vector: " << endl;
    for(ite = ch.begin(); ite != ch.end(); ite++){
        cout << *ite << " ";
    }
    cout << endl;
    cout << endl;
    
    //putting the letter f at the end
    ch.push_back('f');
    
    replace(ch.begin(), ch.end(), 'f', '$');
    
    cout << "Reversed vector with changes to f: " << endl;
    for(ite2 = ch.begin(); ite2 != ch.end(); ite2++){
        cout << *ite2 << " ";
    }
    cout << endl;
    
    return 0;
}
