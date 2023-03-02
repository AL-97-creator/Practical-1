#include <iostream>

  double weighted_average(int array[], int n){
    int numWeight=0;
    int numWeightArr[n];
    double sum=0.0;
    double wavg;
  if (n <1){
    return 0;
   } else {
            for (int i=0; i<n; i++){
                for (int k=0; k<n; k++){
                    if (array[i] == array[k]){
                        numWeight=numWeight+1;
                    }
                }
                numWeightArr[i]=numWeight;
                numWeight=0;
            }
            for (int i=0; i<n; i++){
                sum=sum+(array[i]*numWeightArr[i]);
            }
            double wavg=sum/n;
            return wavg;
   }
        
}
