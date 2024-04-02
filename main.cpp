#include <iostream>
#include <typeinfo>
#include <limits>

unsigned short getSize(int value) {
    return sizeof value;
}

unsigned short getSize(float value) {
    return sizeof value;
}

unsigned short getSize(bool value) {
    return sizeof value;
}

unsigned short getSize(int* value) {
    return sizeof value;
}

int main() {
    std::cout << typeid(1).name() << std::endl;
    std::cout << typeid(5.).name() << std::endl;

     std::cout << "Min int: " << std::numeric_limits<int>::min() << std::endl;
     std::cout << "Max float: " << std::numeric_limits<float>::max() << std::endl;
     std::cout << "Float is signed: " <<  std::numeric_limits<float>::is_signed << std::endl;
     std::cout << "Int is signed: " <<std::numeric_limits<int>::is_signed << std::endl;
  //hw3
    int valInt = 0;
    float valFloat = 0.0;
    bool valBool = true;
    int* valPointer = &valInt;
    std::cout << "Size of int is: " << getSize(valInt) << std::endl;
    std::cout << "Size of float is: " << getSize(valFloat) << std::endl;
    std::cout << "Size of boolean is: " << getSize(valBool) << std::endl;
    std::cout << "Size of pointer is: " << getSize(valPointer) << std::endl;

    return 0;
}

