//
// Created by kimem on 2019-10-16.
//

#ifndef LAB5_ABSTRACT_OPERATION_HPP
#define LAB5_ABSTRACT_OPERATION_HPP
#include "operation.hpp"

class abstract_operator: public operation{
private:
    char operation_type;

public:
    abstract_operator(char mathOp){
        operation_type = mathOp;
    }
    char get_code() override {
        return operation_type;
    }
    virtual ~abstract_operator(){}
};


#endif //LAB5_ABSTRACT_OPERATION_HPP
