#include <iostream>
extern int count_evens(int number);


 int main(){
    int number;
    std::cout << "Enter the upper limit: ";
    scanf("%d", &number);
    std::cout << "The number of even numbers between 1 and  " << number;
    std::cout <<  " (inclusive) is " << count_evens(number);
    printf("\n");
 }