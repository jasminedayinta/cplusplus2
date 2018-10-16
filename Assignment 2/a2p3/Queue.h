//
//  Queue.h
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
#include <queue>

using namespace std;

template <class T>
class Queue{
private:
    int size;
    T *q;
    
public:
    Queue();
    ~Queue();
    Queue(int i);
    Queue(const Queue& qu);
    
    bool push(T);
    bool pop ();
    
    T back(void);
    T front(void);
    
    int getNumEntries();
    void items();
    void resize(int);
    int getSize();
};

template <class T>
Queue<T>::Queue(){
    q = new T[10];
    size = 0;
}

template <class T>
Queue<T>::~Queue(){
}

template <class T>
Queue<T>::Queue(int i){
    size = i;
}

template <class T>
Queue<T>::Queue(const Queue &qu){
    q = qu.q;
    size = qu.size;
}

template <class T>
bool Queue<T>::push(T pu){
    if(q[size] == 10){
        cout << "Queue full!" << endl;
        return false;
    }else{
        size++;
        q[size] = pu;
        return true;
    }
}

template <class T>
bool Queue<T>::pop(){
    int i;
    if(q[size] == 0){
        cout << "Queue is empty!" << endl;
        return false;
    }
    
    for(i = 1; i <= size; i++){
        q[i-1] = q[i];
    }
    --size;
    return true;
}

template <class T>
T Queue<T>::back(void){
    T que = q[size];
    return que;
}

template <class T>
T Queue<T>::front(void){
    T que = q[1];
    return que;
}

template <class T>
int Queue<T>::getNumEntries(){
    return size;
}

template <class T>
void Queue<T>::items(){
    int i;
    for(i = 0; i <= size; i++){
        cout << "Entry is " << q[i] << " at point " << i << endl;
    }
}

template <class T>
void Queue<T>::resize(int r){
    size = r;
    T *t = new T[size];
    t = q;
    
    delete[] q;
    
    q = new T[size];
    q = t;
}

template <class T>
int Queue<T>::getSize(){
    return size;
}
