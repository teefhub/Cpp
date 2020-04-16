#include <iostream>
using namespace std;
int checkOdd(int number){
    if(number % 2 == 0){
        cout<<"Even\n";
    }
    else{
        cout<<"Odd\n";
    }
}
int main(){
    int num;
    cin>>num;
    checkOdd(num);
    return 0;
}