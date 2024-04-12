#include <iostream>
#include "Calculate.h"

using namespace std;

int main() {
  Calculate calculate;
    calculate.calc(10,10,'+');
    std::cout << "Result: " << calculate.getValue() << std::endl;
    calculate.reset();
    calculate.calc(20,5,'-');
    std::cout << "Result: " << calculate.getValue() << std::endl;
    calculate.reset();
    calculate.calc(2,5,'*');
    std::cout << "Result: " << calculate.getValue() << std::endl;
    calculate.reset();
    calculate.calc(10,5,'/');
    std::cout << "Result: " << calculate.getValue() << std::endl;

    calculate.calc(100,'+');
    std::cout << "Result: " << calculate.getValue() << std::endl;




    return 0;
}
