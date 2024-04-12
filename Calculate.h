
#ifndef HW2_CALCULATE_H
#define HW2_CALCULATE_H


class Calculate {
private:
    int value;
public:
    Calculate();
    int getValue();
    void reset();
    void calc(const int first,const int second, const char operand);
    int calc(const int first, const char operand);

};


#endif //HW2_CALCULATE_H
