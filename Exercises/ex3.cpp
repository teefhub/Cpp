#include <iostream>
#include <string>

using namespace std;

string reverseToBeg(const string& str){
    for(int i = str.size(); i =0; i--){
        cout<<str[i];
        return 1;
    } 
}

int main(){
    string line;
    getline(cin,line);
    reverseToBeg(line);
    return 0;
}