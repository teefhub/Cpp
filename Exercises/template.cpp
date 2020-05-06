//very useful for larger objects, and when you dont know the size of the variable at compile time

#include <iostream>
#include <string>
//return the max of 2 values
using namespace std;
//template <class/typename type> return-type function-name (para){}
//inline increases the execution time of the program
//use template to avoid overloading functions
template <typename T> inline T const& Max(T const& a, T const& b){
    return a<b?b:a;
}
int main(){
   int i = 39;
   int j = 20;
   cout<<"Max(i,j) : " <<Max(i,j)<<endl;
   double f1 = 13.5;
   double f2 = 20.7;
    cout<<"Max(f1, f2) : "<<Max(f1,f2)<<endl;
    string s1 = "new";
    string s2 = "hellow";
    cout<<"Max(s1,s2): "<<Max(s1,s2)<<endl;
   return 0;
}