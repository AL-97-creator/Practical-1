#include <iostream>

extern bool is_fanarray(int array[], int n);

int main(){
    int array[6]={1,2,3,3,2,1};
    int n=6;
    std::cout << is_fanarray(array,n);
    printf("\n");

}