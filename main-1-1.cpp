#include <iostream>
extern int array_sum(int array[], int n);


 int main(){
    int array[5]={1,2,3,4,5};
    int num=5;
    int sum=array_sum(array,num);
    std::cout << "The sum is " << sum;
    printf("\n");
 }