//
//  WindGauge.cpp
//  a3p5
//
//  Created by Jasmine Juwono on 08.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a3_p5.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "WindGauge.h"
#include <iostream>
#include <deque>

using namespace std;

WindGauge::WindGauge(int period){
    this->period = period;
}

void WindGauge::currentWindSpeed(int speed){
    if((int)deq.size() == period){
        deq.pop_back();
        deq.push_front(speed);
    }else{
        deq.push_front(speed);
    }
}

int WindGauge::highest() const{
    deque<int>::const_iterator ite = deq.begin();
    int i = *ite;
    
    while(ite != deq.end()){
        if(*ite > i){
            i = *ite;
        }
        ite++;
    }
    return i;
}

int WindGauge::lowest() const{
    deque<int>::const_iterator ite = deq.begin();
    int i = *ite;
    
    while(ite != deq.end()){
        if(*ite < i){
            i = *ite;
        }
        ite++;
    }
    return i;
}

int WindGauge::average() const{
    deque<int>::const_iterator ite = deq.begin();
    int avg;
    int i = 0;
    
    while(ite != deq.end()){
        i = i + *ite;
        ite++;
    }
    
    avg = i/deq.size();
    return avg;
}

void WindGauge::print(){
    cout << "The highest is: " << highest() << endl;
    cout << "The lowest is: " << lowest() << endl;
    cout << "The average is: " << average() << endl;
}
