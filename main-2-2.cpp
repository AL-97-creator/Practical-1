#include <iostream>

extern int max_element(int array[], int n);

int main(){
    int array[5]={1,2,3,4,5};
    int n=5;
    std::cout << "The largest number in the array is " << max_element(array,n);
    printf("\n");

}