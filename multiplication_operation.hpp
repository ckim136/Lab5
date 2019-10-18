//
// Created by kimem on 2019-10-16.
//

#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP
#include "abstract_operation.hpp"
// multiplication operation
class multiplication_operation : public abstract_operator{
public:
    static const char MULTIPLICATION_CODE = '*';
    // constructor calling base class constructor
    multiplication_operation():abstract_operator(MULTIPLICATION_CODE){}
    // perform function
    int perform(int x, int y)override {return x*y;}
    // virtual destructor
    virtual ~multiplication_operation() override{}
};
#endif //LAB5_MULTIPLICATION_OPERATION_HPP
