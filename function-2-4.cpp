#include <iostream>

 bool is_ascending(int array[], int n){
   if (n<=0){
    return 0;
   } else {
        for (int i=0;i<n-1;i++){
            if (array[i]>array[i+1]){
                return 0;
            }
            }
            return 1;
        } 
        return 0;
   }
  

 