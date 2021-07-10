#ifndef POLISHER_H
#define POLISHER_H

#include <string>
#include <sstream>
#include <iostream>

template <typename T>
class Polisher {
    private:
        bool isNegativeNumber(const T &number);
    
    public:
        std::string polishTheNumber(const T &number);
};

#include "../templates/Polisher.tpp"

#endif