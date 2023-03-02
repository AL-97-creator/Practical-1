#include <iostream>

extern int min_element(int array[], int n);

int main(){
    int array[5]={1,2,3,4,5};
    int n=5;
    std::cout << "The smallest number in the array is " << min_element(array,n);
    printf("\n");

}