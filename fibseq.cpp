//Fibonacci Sequence - 
//Enter a number and have the program generate the Fibonacci sequence to that number or to the Nth number.

#include <iostream>
#include <cmath>
using namespace std;

int posfibsq(int number){
    if(number>=3) {return posfibsq(number-1)+posfibsq(number-2);}
    else {return 1;}}
int negfibsq(int number){
    if(number == -1) {return 1;}
    else {return pow(-1,number+1)*negfibsq(abs(number));}}
bool checkPos(int number){
    if (number > 0) posfibsq(number);
    if (number<0) negfibsq(number);
    if(number == 0) return 0;}

int main(){
    int number;
    cout<<"Enter Nth number: ";
    cin>>number;
    cout<<"Fibonacci sequence to Nth number: " <<checkPos(number)<<endl;
}