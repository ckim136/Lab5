//
// Created by kimem on 2019-10-16.
//

#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP
#include <stack>
#include "addition_operation.hpp"
#include "division_operation.hpp"
#include "multiplication_operation.hpp"
#include "subtraction_operation.hpp"
#include <string>
using namespace std;
class rpn_calculator{
private:
    int result;
    stack<int> myStack;
    // returns pointer to the operation
    operation* operation_type(char operation);
    // accepts pointer to the operation
    void perform(operation*);
public:
    // accepts formula
    int process_form(string formula);

};
#endif //LAB5_RPN_CALCULATOR_HPP
