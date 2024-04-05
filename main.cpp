#include <iostream>

using namespace std;

void revertArray(int *arr, int size)
{
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    revertArray(arr, sizeof(arr) / sizeof(arr[0]));
    std::cout << "[ ";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
       std::cout << arr[i] << ", ";
           }
    std::cout << "\b\b ]"<<endl;

    return 0;
}

