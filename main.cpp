#include <iostream>
#include "Calculate.h"

using namespace std;

int main() {
  Calculate calculate;
    int result = calculate.calc(2,'+').calc(4,'-').calc(5,'*').getValue();
    std::cout << "Result: " << result << std::endl;
    return 0;
}
