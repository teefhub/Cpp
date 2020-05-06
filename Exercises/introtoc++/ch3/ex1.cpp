/*Create a program to calculate the square roots of the numbers
4 12.25 0.0121
*/

#include <iostream>
#include <cmath>

using namespace std;

double squareroot(double x);

int main(){
    cout<<"Number"<<"\t"<<"Square Root \n";
    cout<<"\n";
    double x = 4.0;
    double y = 12.25;
    double z = 0.0121;
    cout<<x<<"\t"<<sqrt(x)<<"\n";
    cout<<y<<"\t"<<sqrt(y)<<"\n";
    cout<<z<<"\t"<<sqrt(z)<<"\n";
}

double squareroot(double x){
    sqrt(x);
    return x;
}