//
// Created by kimem on 2019-10-16.
//

#ifndef LAB5_DIVISION_OPERATION_HPP
#define LAB5_DIVISION_OPERATION_HPP
#include "abstract_operation.hpp"
class division_operation: public abstract_operator{
public:
    static const char DIVISION_CODE = '/';
    division_operation(): abstract_operator(DIVISION_CODE){}
    int perform(int x, int y)override {return x/y;}
    virtual ~division_operation(){}
};
#endif //LAB5_DIVISION_OPERATION_HPP
