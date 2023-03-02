#include <iostream>

 int sum_two_arrays(int array[], int secondarray[], int n){
 int sum1=0;
 int sum2=0;
    if (n<=0){
        return 0;
    }
    else {
       for (int i=0;i<=(n-1);i++){
            sum1=sum1+array[i];
            sum2=sum2+secondarray[i];
    }
    int sum=sum1+sum2;
    return sum;
    }
 }