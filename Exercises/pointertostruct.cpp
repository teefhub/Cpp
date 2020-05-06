#include <iostream>
using namespace std;

//creating the structur
struct Student{
    char name[80];
    int age;
    float percent;
};

//creating the structure object
struct Student*emp = NULL;//pointer emp pointing to nothing

int main(){
    //assigning memory to struct variable emp
    emp = (struct Student*)(malloc(sizeof(struct Student)));

    //assigning value 
    emp -> age = 18;

    cout<<emp-> age;    
    return 0;
}