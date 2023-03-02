#include <iostream>

 int median_array(int array[], int n){
    int narr[n];
  if ( n <1 || n % 2==0){
    return 0;
   } else {
            for (int i=0; i<n ;i++){
                for (int k=i+1; k<n; k++){
                    if (array[i]>array[k]){
                        int placehold=array[i];
                        array[i]=array[k];
                        array[k]=placehold;
                    } 
                } 
            } return array[(n/2)];
 } return 0;
 }
