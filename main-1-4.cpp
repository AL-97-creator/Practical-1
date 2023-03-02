#include <iostream>
extern int sum_two_arrays(int array[], int secondarray[], int n);


 int main(){
    int array[5]={1,2,3,4,5};
    int secondarray[5]={3,2,6,1,0};
    int num=5;
    int sum=sum_two_arrays(array,secondarray,num);
    std::cout << "The total sum of the two arrays is " << sum;
    printf("\n");
 }