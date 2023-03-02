#include <iostream>

extern int median_array(int array[], int n);

int main(){
    int array[7]={7,2,5,6,4,3,1};
    int n=7;
    std::cout << median_array(array,n);
    printf("\n");

}