/*
 * @Author: Tiffany Lee 
 * @Date: 2020-04-21 12:03:46 
 * @Last Modified by: Tiffany Lee
 * @Last Modified time: 2020-04-21 12:54:37
 */


/* convert a name into initials. */
#include <iostream>
#include <string>

using namespace std;

void convert(const string& name){
    cout<<name.front();//reference to the first character of the string, returns char&
    for(unsigned i = 0; i<name.length(); i++){
        if(name[i] == ' ')
            cout<<"."<<(char)toupper(name[i+1]);//toupper() returns int, we need to cast type it to char
    }
}

int main(){
    string name;
    cout<<"Enter your name:";
    getline(cin,name);
    convert(name);
    /* 
        for(unsigned i = 0; i <name.length();i++){
        cout<<name.at(8);//returns 8th character until hits length of name    }for(unsigned i = 0; i <name.length();i++){
        cout<<name[i];} 
    */
    return 0;
}