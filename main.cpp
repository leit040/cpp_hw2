#include <iostream>

using namespace std;

int calc(int first,int second, char operand){
    switch (operand){
        case '+':
            return first + second;
        case '-':
            return first - second;
        case '*':
            return first * second;
        case '/':
            if(second){
                return first / second;
            }
            std::cout << "Warning: Division by zero !!!"  << std::endl;
            break;
        default:
            std::cout << "Warning: Please choose only + - * /"  << std::endl;
            break;
    }
    return 0;
}

int main() {

    std::cout << "Sum: " << calc(3,5,'+') << std::endl;
    std::cout << "Subtraction: " << calc(3,5,'-') << std::endl;
    std::cout << "Multiplying: " << calc(3,5,'*') << std::endl;
    std::cout << "Division: " << calc(3,5,'/') << std::endl;
    std::cout << "Non correct input: " << calc(3,5,'!') << std::endl;
    std::cout << "Division by zero: " << calc(3,0,'/') << std::endl;


    return 0;
}
