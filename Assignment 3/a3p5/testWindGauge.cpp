//
//  main.cpp
//  a3p5
//
//  Created by Jasmine Juwono on 06.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a3_p5.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "WindGauge.h"
#include <iostream>

using namespace std;

int main() {
    WindGauge wg;
    
    wg.currentWindSpeed(14);
    wg.currentWindSpeed(16);
    wg.currentWindSpeed(13);
    wg.currentWindSpeed(15);
    wg.currentWindSpeed(15);
    
    wg.print();
    cout << endl;
    
    cout << "Added measurements" << endl;
    wg.currentWindSpeed(15);
    wg.currentWindSpeed(17);
    wg.currentWindSpeed(17);
    wg.currentWindSpeed(16);
    wg.currentWindSpeed(20);
    wg.currentWindSpeed(15);
    wg.currentWindSpeed(16);
    wg.currentWindSpeed(20);
    
    wg.print();
    
    return 0;
}
