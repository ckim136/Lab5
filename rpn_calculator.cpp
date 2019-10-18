//
// Created by kimem on 2019-10-16.
//

#include <sstream>
#include "rpn_calculator.hpp"

operation *rpn_calculator::operation_type(char operation) {
    switch(operation){
            // +
        case addition_operation::ADDITION_CODE:
            return new addition_operation;
            // /
        case division_operation::DIVISION_CODE:
            return new division_operation;
            // *
        case multiplication_operation::MULTIPLICATION_CODE:
            return new multiplication_operation;
            // -
        case subtraction_operation::SUBTRACTION_CODE:
            return new subtraction_operation;
        default:
            return nullptr;
    }

}

void rpn_calculator::perform(operation *operation) {
    // second int
    int y = myStack.top();
    // pop it from the stack
    myStack.pop();
    // first int
    int x = myStack.top();
    // pop it from the stack
    myStack.pop();
    // call appropriate perform function using the parameter
    result = operation->perform(x, y);
    // put the result on top of the stack
    myStack.push(result);


}

int rpn_calculator::process_form(string formula) {
    // stream accepts formula
    istringstream iss(formula);
    // operand is the entire formula at this point
    string operand;
    // While I can extract string operand
    while(iss >> operand){
        int i;
        // second stream
        istringstream iss2(operand);
        // if what I extracted is integer
        if(iss2 >> i) {
            // put it on top of the stack
            myStack.push(i);
        }else{ // if what I extracted is not int (operators)
            // go to switch and call appropriate operation
            // operand[0] is one of + - * /
            char op = operand[0];
            perform(operation_type(op));
            // delete the dynamic memory
            delete operation_type(op);
        }
    }
    // return the result of the calculation
    return myStack.top();
}
