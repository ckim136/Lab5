//
// Created by kimem on 2019-10-16.
//

#include <sstream>
#include "rpn_calculator.hpp"

operation *rpn_calculator::operation_type(char operation) {
    switch(operation){
        case addition_operation::ADDITION_CODE:
            return new addition_operation;
        case division_operation::DIVISION_CODE:
            return new division_operation;
        case multiplication_operation::MULTIPLICATION_CODE:
            return new multiplication_operation;
        case subtraction_operator::SUBTRACTION_CODE:
            return new subtraction_operator;
    }

}

void rpn_calculator::perform(operation *operation) {
    int y = myStack.top();
    myStack.pop();
    int x = myStack.top();
    myStack.pop();
    result = operation->perform(x, y);
    myStack.push(result);


}

int rpn_calculator::process_form(string formula) {
    istringstream iss(formula);
    string operand;
    while(iss >> operand){
        int i;
        istringstream iss2(operand);
        if(iss2 >> i) {
            myStack.push(i);
        }else{
            perform(operation_type(operand[0]));
        }
    }
    return myStack.top();
}
