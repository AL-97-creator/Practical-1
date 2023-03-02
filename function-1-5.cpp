#include <iostream>

 int count_evens(int number){
 int num=0;
    if (number<=0){
        return 0;
    } else {
        for (int i=1;i<=number;i++){
            if (i % 2==0){
                num=num+1;
            } else{
                num=num+0;
            }
        }
    }
    return num;
 }