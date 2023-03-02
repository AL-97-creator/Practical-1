#include <iostream>

 bool is_fanarray(int array[], int n){
  if (n<1){
    return 0;
   } else {
            for (int i=0; i<=(n/2); i++){
                if (array[i] != array[n-i-1]){
                    return 0;
                }
             } 
   }return 1;
 }
