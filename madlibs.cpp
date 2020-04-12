#include <iostream>
using namespace std;

int main(){
    string colour, nouns, name;
    cout<<"enter a colour\n";
    //get string using cin
    getline(cin,colour);
    cout<<"enter nouns\n";
    getline(cin,nouns);
    cout<<"enter a name\n";
    getline(cin,name);

    cout<<"Roses are "<<colour<<endl;
    cout<<nouns<<" are blue\n";
    cout<<"hello"<<name<<endl;
    }
    