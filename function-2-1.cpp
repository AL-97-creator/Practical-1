#include <iostream>

 int min_element(int array[], int n){
    int min;
    if (n<=0){
        return 0;
    } else {
        min = array[0];
        for (int i=0;i<n;i++){
            if (min>array[i]){
                min=array[i];
            }
        }
    }
    return min;
 }

 