//
//  Header.h
//  stack
//
//  Created by Stephan Zeitz on 06.01.17.
//  Copyright (c) 2017 Stephan Zeitz. All rights reserved.
//

#ifndef Stack_Test_Header_h
#define Stack_Test_Header_h

class stack
{
public:
    using data_type = int;
    void push(data_type);
    data_type pop();
    size_t count() const;
    bool empty() const;
    
    stack();
private:
    data_type length;
    int* pointer_old;
    int* pointer_new;
};

#endif
