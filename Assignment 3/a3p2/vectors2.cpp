//
//  main.cpp
//  a3p2
//
//  Created by Jasmine Juwono on 05.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a3_p2.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string word, s1, s2;
    unsigned int i;
    vector<string> v;
    vector<string>::const_iterator ite, ite2;
    
    while(1){
        cout << "Enter word: ";
        getline(cin, word);
        
        if(word == "stop"){
            break;
        }
        v.push_back(word);
    }
    cout << endl;
    
    if(v.size() >= 4){
        swap(v.at(1), v.at(3));
    }else{
        cerr << "The elements don't exist on position two and/or four " << endl;
    }
    
    if(v.empty()){
        cerr << "Error! No elements in the vector!" << endl;
    }
    s1 = *(v.end() -1);
    s2 = "?";
    replace(v.end() - 1, v.end(), s1, s2);
    
    
    cout << "Using index operator: ";
    for(i = 0; i < v.size(); i++){
        if(v[i] != *(v.end() - 1)){
            cout<< v[i] << ";";
        }else{
            cout << v[i];
        }
    }
    cout << endl;
    
    cout << "Using iterator: ";
    for(ite = v.begin(); ite != v.end(); ite++){
        if(ite == v.end() - 1){
            cout << *ite;
        }else{
            cout << *ite << "-";
        }
    }
    cout << endl;
    
    reverse(v.begin(), v.end());
    cout << "Reversed order: ";
    for(ite2 = v.begin(); ite2 != v.end(); ite2++){
        cout << *ite2 << " ";
    }
    cout << endl;
    
    return 0;
}

