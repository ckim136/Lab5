//
// Created by kimem on 2019-10-16.
//

#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP
#include "abstract_operation.hpp"
// addition operation
class addition_operation : public abstract_operator{
public:
    static const char ADDITION_CODE = '+';
    // constructor calling base class constructor
addition_operation(): abstract_operator(ADDITION_CODE){}
// Perform function
    int perform(int x, int y) override {return x+y;}
    // virtual destructor
virtual ~addition_operation() override{}


};
#endif //LAB5_ADDITION_OPERATION_HPP
