//
// Created by kimem on 2019-10-16.
//

#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP
#include "abstract_operation.hpp"
class subtraction_operator : public abstract_operator{
public:
    static const char SUBTRACTION_CODE = '-';
    subtraction_operator(): abstract_operator(SUBTRACTION_CODE){}
    int perform(int x, int y)override {return x-y;}
    virtual ~subtraction_operator(){}
};
#endif //LAB5_SUBTRACTION_OPERATION_HPP
