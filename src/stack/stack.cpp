//
//  main.cpp
//  stack
//
//  Created by Stephan Zeitz on 06.01.17.
//  Copyright (c) 2017 Stephan Zeitz. All rights reserved.
//

#include <iostream>
#include "stack.hpp"

stack::stack() : length(0), pointer_new(nullptr) {
}

size_t stack::count() const {
    return 0;
}

bool stack::empty() const {
    return false;
}


void stack::push(data_type number) {
    length++;
    int *old = pointer_new;
    pointer_new = new int[length];
    pointer_new[0] = number;
    for (int i = 1; i < length; i++) {
        pointer_new[i] = old[i - 1];
    }
    delete[] old;
}

stack::data_type stack::pop() {
    data_type buffer;
    if (length == 0){
        throw std::runtime_error("Tried to pop empty stack");
    }
    length--;
    int *old = pointer_new;
    pointer_new = new int[length];
    for (int i = 0; i < length; i++) {
        pointer_new[i] = old[i + 1];
    }
    buffer = old[0];
    delete[](old);
    return buffer;

}

