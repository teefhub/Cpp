//very useful for larger objects, and when you dont know the size of the variable at compile time

#include <iostream>

using namespace std;

class Box{
    public:
        Box(){
            cout<<"Constructor called"<<endl;
        }
        ~Box(){
            cout<<"Deconstructor called"<<endl;
        }
};

int main(){
    Box*myboxarr = new Box[1];
    delete [] myboxarr;//delete the array
    return 0;
}