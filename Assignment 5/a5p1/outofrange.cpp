//
//  main.cpp
//  a5p1
//
//  Created by Jasmine Juwono on 12.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a5_p1.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>

using namespace std;

int main(){
    vector<int> vec;
    int i;
    
    for (i = 0; i < 15; i++){
        vec.push_back('@');
    }
    try{
        vec.at(16);
        throw "Error! No element in the 16th element";
    }
    catch(const out_of_range err){
        cerr << "Out of range exception: \n" << err.what() << endl;
        return 1;
    }
    return 0;
}
