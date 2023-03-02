#include <iostream>

 int num_count(int array[], int n, int number){
    int num=0;
    if (n<=0){
        return 0.0;
    }
    else {
       for (int i=0;i<=(n-1);i++){
            if (array[i]==number){
                num=num+1;
            } else {
                num=num;
            }
       }
    return num;
    }
 }