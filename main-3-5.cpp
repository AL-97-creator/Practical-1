#include <iostream>

extern double sum_even(double array[], int n);

int main(){
    double array[7]={1,2,3,4,5,6,7};
    int n=7;
    std::cout << sum_even(array,n) << std::endl;
}