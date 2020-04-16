#include <iostream>

using namespace std;
int main(){
int i = 5;
int * p = &i;
cout<<*p;
*p+=10;

cout<<*p;
}