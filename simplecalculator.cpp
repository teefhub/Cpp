#include <iostream>
using namespace std;

int main(){
    double num1;
    double num2;
    double result;
    char op;
    cout << "Enter 2 numbers \n";
    cin >> num1 >> op >> num2;
    switch (op) {
        case '+': 
            cout<< num1+num2;
             break;
        case '-': 
            cout<< num1-num2;
            break;
        case '*': 
            cout<< num1*num2;
            break;
        case '/': 
            cout<< num1/num2;
            break;
        //no modulus on double. there is a func
        default:
        cout<<"Unknown operator";
    }
    

    
    return 0;
}