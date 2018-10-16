//
//  main.cpp
//  a3p1
//
//  Created by Jasmine Juwono on 05.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a3_p1.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    string word;
    unsigned int i;
    vector<string> v;
    vector<string>::const_iterator ite;
    
    while(1){
        cout << "Enter word: ";
        cin >> word;
        
        if(word == "stop"){
            break;
        }
        v.push_back(word);
    }
    cout << endl;
    
    cout << "Using index operator: ";
    for(i = 0; i < v.size(); i++){
        if(i == v.size() - 1){
            cout<< v[i];
        }else{
            cout << v[i] << ", ";
        }
    }
    cout << endl;
    
    cout << "Using iterator: ";
    for(ite = v.begin(); ite != v.end(); ite++){
        cout << *ite << " ";
    }
    cout << endl;
    
    return 0;
}

    
