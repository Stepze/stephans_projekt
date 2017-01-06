#include <iostream>
#include <stack.hpp>

int main() {

    stack s;

    try {
        auto i = s.pop();
        i = i + 2;
    } catch(const std::exception& e){
        std::cout << "Dumm gelaufen" << std::endl;
    }

    return 0;
}