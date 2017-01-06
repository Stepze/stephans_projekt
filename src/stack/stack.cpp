//
//  main.cpp
//  Stack_Test
//
//  Created by Stephan Zeitz on 06.01.17.
//  Copyright (c) 2017 Stephan Zeitz. All rights reserved.
//

#include <iostream>
#include "Stack_Test.h"

Stack_Test::Stack_Test()
{
    length = 0;
    pointer_old = NULL;
    pointer_new = NULL;
}



void Stack_Test::push(data_type number)
{
    length++;
    pointer_new = new int[length];
    for(int i=0;i<length;i++)
    {
        if (i==0)
        {
            pointer_new[i]=number;
            continue;
        }
        else
            pointer_new[i]=pointer_old[i-1];
    }
    pointer_old = pointer_new;
}

Stack_Test::data_type Stack_Test::pop()
{
    data_type buffer;
    length--;
    pointer_new = new int[length];
    for(int i=0;i<length;i++)
    {
        pointer_new[i]=pointer_old[i+1];
    }
    buffer = pointer_old[0];
    pointer_old = pointer_new;
    return buffer;
    
}

