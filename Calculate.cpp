//
// Created by leit on 12.04.24.
//
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
        case '+':
            value =  first + second;
            break;
        case '-':
            value =  first - second;
            break;
        case '*':
            value =  first * second;
            break;
        case '/':
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

void Calculate::calc(const int val, const char operand){
    switch (operand){
        case '+':
            value += val;
            break;
        case '-':
            value -= val;
            break;
        case '*':
            value *= val;
            break;
        case '/':
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
}
