#include <iostream>

extern bool is_descending(int array[], int n);

int main(){
    int array[6]={6,5,4,3,2,1};
    int n=6;
    std::cout << is_descending(array,n);
    printf("\n");

}