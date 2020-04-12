#include <iostream>

using namespace std;
double calculate(double mark){
        if(mark >=85 && mark <=100){
            cout<<"High Distinction (HD)"<<endl;}
        else if(mark >=75&& mark <85){
            cout<<"Distinction (D)"<<endl; }
        else if(mark >=65&& mark <75){
            cout<<"Credit (C)"<<endl;}
        else if(mark >=50&& mark <65){
            cout<<"Pass(P)"<<endl; }
        else{
        cout<<"Fail"<<endl;}
}

int main(){
    double marks;
    cout<<"Enter your mark: \n";
    cin>>marks;
    cout<<"Your subject grade is: \n";
    calculate(marks);
}