//
// Created by kimem on 2019-10-16.
//

#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP
using namespace std;
class operation{
public:
    virtual char get_code() = 0;
    virtual int perform(int x, int y) = 0;
    virtual ~operation(){};
};
#endif //LAB5_OPERATION_HPP
