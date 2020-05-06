//very useful for larger objects, and when you dont know the size of the variable at compile time

#include <iostream>

using namespace std;

int main(){
    double *pointer;
    pointer = NULL;

    //assign new memory for the pointer
    pointer = new double;
    *pointer = 35542789732943.9809;//assign a large value for pointer

    cout<<"value of pointer is "<<*pointer<<endl;
    delete pointer;
    return 0;
}