//
// Created by kimem on 2019-10-16.
//

#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP
using namespace std;
class operation{
public:
    //purely virtual member functions
    virtual char get_code() = 0;
    virtual int perform(int x, int y) = 0;
    // virtual destructor
    virtual ~operation(){};
};
#endif //LAB5_OPERATION_HPP
