#include <iostream>
extern double array_mean(int array[], int n);


 int main(){
    int array[5]={1,2,3,4,5};
    int num=5;
    double avg=array_mean(array,num);
    std::cout << "The average is " << avg;
    printf("\n");
 }