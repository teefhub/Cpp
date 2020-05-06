/*Exercise 4
Write a C++ program that two defines variables for floating-point numbers and
initializes them with the values
123.456 and 76.543
Then display the sum and the difference of these two numbers on screen.
*/

#include <iostream>

float sum(float *x, float *y){
    float sum = (*x+*y);
    return sum;
}

float sub(float *x, float *y){
    return (*x-*y);
}

int main(){
    float x, y;
    std::cin>>x;
    std::cout<<"\n";
    std::cin>>y;
    std::cout<<"\n";
    sum(&x,&y);
    sub(&x,&y);
    return 0;
}