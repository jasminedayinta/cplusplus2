//
//  WindGauge.hpp
//  a3p5
//
//  Created by Jasmine Juwono on 08.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a3_p5.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
#include <deque>

using namespace std;

class WindGauge{
public:
    WindGauge(int period = 10);
    void currentWindSpeed(int speed);
    int highest() const;
    int lowest() const;
    int average() const;
    void print();
    
private:
    int speed;
    int period;
    deque<int> deq;
};

