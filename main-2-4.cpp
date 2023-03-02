#include <iostream>

extern bool is_ascending(int array[], int n);

int main(){
    int array[6]={1,2,4,5,5,9};
    int n=6;
    std::cout << is_ascending(array,n);
    printf("\n");

}