//
// Created by kimem on 2019-10-16.
//

#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP
#include "abstract_operation.hpp"
class multiplication_operation : public abstract_operator{
public:
    static const char MULTIPLICATION_CODE = '*';
    multiplication_operation():abstract_operator(MULTIPLICATION_CODE){}
    int perform(int x, int y)override {return x*y;}
    virtual ~multiplication_operation(){}
};
#endif //LAB5_MULTIPLICATION_OPERATION_HPP
