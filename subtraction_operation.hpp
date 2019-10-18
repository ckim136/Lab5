//
// Created by kimem on 2019-10-16.
//

#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP
#include "abstract_operation.hpp"
// subtraction operation
class subtraction_operation : public abstract_operator{
public:
    static const char SUBTRACTION_CODE = '-';
    // constructor calling base class constructor
    subtraction_operation(): abstract_operator(SUBTRACTION_CODE){}
    // perform function
    int perform(int x, int y)override {return x-y;}
    // virtual destructor
    virtual ~subtraction_operation(){}
};
#endif //LAB5_SUBTRACTION_OPERATION_HPP
