#include <iostream>

 double array_mean(int array[], int n){
    int avg;
    int sum=0;
    if (n<=0){
        return 0.0;
    }
    else {
       for (int i=0;i<=(n-1);i++){
            sum=sum+array[i];
            
    }
    avg=sum / n;
    (double)avg;
    return avg;
    }
 }

 