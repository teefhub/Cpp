/*Exercise 1
The sizeof operator can be used to determine the number of bytes occupied
in memory by a variable of a certain type. For example, sizeof(short) is
equivalent to 2.
Write a C++ program that displays the memory space required by each
fundamental type on screen.*/

#include <iostream>

using namespace std;

int main(){
    cout<<"Memory space required for each variable of type bool is " << sizeof(bool)<<endl;    
    cout<<"Memory space required for each variable of type float is " << sizeof(float)<<endl;
    cout<<"Memory space required for each variable of type char is " << sizeof(char)<<endl;
    cout<<"Memory space required for each variable of type char16_t is " << sizeof(char16_t)<<endl;
    cout<<"Memory space required for each variable of type char32_t is " << sizeof(char32_t)<<endl;
    cout<<"Memory space required for each variable of type wchar_t is " << sizeof(wchar_t)<<endl;
    cout<<"Memory space required for each variable of type int is " << sizeof(int)<<endl;
    cout<<"Memory space required for each variable of type signed int is " << sizeof(signed int)<<endl;
    cout<<"Memory space required for each variable of type signed short int is " << sizeof(signed short int)<<endl;
    cout<<"Memory space required for each variable of type signed long int is " << sizeof(signed long int)<<endl;
    cout<<"Memory space required for each variable of type signed long long intint is " << sizeof(signed long long int)<<endl;
    cout<<"Memory space required for each variable of type double is " << sizeof(double)<<endl;
    cout<<"Memory space required for each variable of type long double is " << sizeof(long double)<<endl;
    cout<<"Memory space required for each variable of type decltype(nullptr) is " << sizeof(decltype(nullptr))<<endl;
    return 0;
}