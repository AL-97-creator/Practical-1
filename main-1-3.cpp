#include <iostream>
extern int num_count(int array[], int n, int number);


 int main(){
    int array[5]={1,2,3,4,5};
    int num=5;
    int number=3;
    std::cout << "The amount of times the number " << number;
    std::cout << " appears is " << num_count(array,num,number);
    printf("\n");
 }