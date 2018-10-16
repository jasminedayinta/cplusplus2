//
//  LinkedList.h
//  a2p4
//
//  Created by Jasmine Juwono on 03.04.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*CH08-320143
 a2_p4.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <cstdlib>

using namespace std;

template <class T>
class LinkedList{
private:
    LinkedList *next;
    LinkedList *prev;
    T info;
    int size;
    
public:
    LinkedList();
    ~LinkedList();
    LinkedList(const LinkedList& L);
    LinkedList(int i);
    
    void returLast();
    void returFirst();
    
    LinkedList* removeFront();
    LinkedList* removeBack();
    LinkedList* pushFront(T num);
    LinkedList* pushBack(T num);
    
    void returAmount();
    void valueinList();
};

template <class T>
LinkedList<T>::LinkedList(){
    next = NULL;
    prev = NULL;
    size = 0;
}

template <class T>
LinkedList<T>::~LinkedList(){
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList& L){
    size = L.size;
}

template <class T>
LinkedList<T>::LinkedList(int i){
    size = i;
}

template <class T>
void LinkedList<T>::returLast(){
    LinkedList* curr = this;
    while(curr->next != NULL){
        curr = curr->next;
    }
    cout << curr->info << endl;
}

template <class T>
void LinkedList<T>::returFirst(){
    cout << this->info << endl;
}

template <class T>
LinkedList<T>* LinkedList<T>::removeFront(){
    LinkedList* curr = this->next;
    LinkedList* temp = this;
    
    if(temp != NULL){
        delete this;
        return curr;
    }
    return this;
}

template <class T>
LinkedList<T>* LinkedList<T>::removeBack(){
    LinkedList* curr = this;
    LinkedList* temp = new LinkedList;
    
    while(curr->next != NULL){
        curr = curr->next;
    }
    temp = curr->prev;
    temp->next = NULL;
    temp->prev = curr->prev->prev;
    
    return this;
}

template <class T>
LinkedList<T>* LinkedList<T>::pushFront(T num){
    LinkedList *newel = new LinkedList;

    newel->info = num;
    newel->next = this;
    newel->prev = NULL;
    
    return newel;
}

template <class T>
LinkedList<T>* LinkedList<T>::pushBack(T num){
    LinkedList *newel = new LinkedList;
    LinkedList *curr = this;
    LinkedList *temp = this;
    
    newel->info = num;
    
    if(temp == NULL){
        newel->prev = NULL;
        newel->next = NULL;
        return newel;
    }
    
    while(curr->next != NULL){
        curr = curr->next;
    }
    
    newel->next = NULL;
    newel->prev = curr;
    curr->next = newel;

    return this;
}

template <class T>
void LinkedList<T>::returAmount(){
    int i = 1;
    LinkedList* curr = this;

    while(curr->next != NULL){
        curr = curr->next;
        i++;
    }
    cout << i << endl;
}

template <class T>
void LinkedList<T>::valueinList(){
    LinkedList *curr = this;
    
    while(curr != NULL){
        cout << curr->info << " ";
        curr = curr->next;
    }
}
