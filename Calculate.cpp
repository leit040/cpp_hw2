#include <iostream>
#include "Calculate.h"


Calculate::Calculate(){
    reset();
}

int Calculate::getValue(){
    return value;
}
void Calculate::reset(){
    value = 0;
}
void Calculate::calc(const int first,const int second, const char operand)
{
    switch (operand){
        case ADDITION:
            value =  first + second;
            break;
        case SUBTRACTION:
            value =  first - second;
            break;
        case MULTIPLY:
            value =  first * second;
            break;
        case DIVISION:
            if(second){
                value = first / second;
                break;
            } else{
                std::cout << "Warning: Division by zero !!!"  << std::endl;
                break;
            }

        default:
            std::cout << "Warning: Please choose only + - * /"  << std::endl;
            break;
    }

}

Calculate&  Calculate::calc(const int val, const char operand){
    switch (operand){
        case ADDITION:
            value += val;
            break;

        case SUBTRACTION:
            value -= val;
            break;

        case MULTIPLY:
            value *= val;
            break;

        case DIVISION:
            if(val){
                value /= val;
                break;

            } else{
                std::cout << "Warning: Division by zero !!!"  << std::endl;
                break;
            }

        default:
            std::cout << "Warning: Please choose only + - * /"  << std::endl;
            break;
    }
    return *this;
}
