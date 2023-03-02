#include <iostream> 

  double sum_even(double array[], int n){
    double sum=0.0;
    if (n<1){
        return 0;
    } else {
        for (int i=1;i<n;i+=2){
            sum=sum+array[i];
        }
    } return sum;
    }
