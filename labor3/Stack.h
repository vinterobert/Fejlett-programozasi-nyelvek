//
// Created by vince on 10/7/2021.
//

#ifndef LABOR3_STACK_H
#define LABOR3_STACK_H


#include "List.h"

class Stack {
private:
    List elements;
public:
    void push(int e);
    int pop();
    bool isEmpty();
};


#endif //LABOR3_STACK_H
