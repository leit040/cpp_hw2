
#ifndef HW2_CALCULATE_H
#define HW2_CALCULATE_H


class Calculate {
private:
    int value;
public:
    static const char ADDITION = '+';
    static const char SUBTRACTION = '-';
    static const char MULTIPLY = '*';
    static const char DIVISION = '/';
    Calculate();
    int getValue();
    void reset();
    void  calc(const int first,const int second, const char operand);
    Calculate&  calc(const int first, const char operand);

};


#endif //HW2_CALCULATE_H
