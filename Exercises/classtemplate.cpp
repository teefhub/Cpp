#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

//deine a class Stack<> and implement generic methods to push and pop elements from the stack
template <class T> class Stack{
    private:
        vector<T> element;          //define a vector of elements
    public:
        void push(T const&);        //declare a push method
        void pop();                 //declare a pop method, no arguments as LIFO
        T top() const;              //const_reference& top() const; return the last inseted element
        
        bool empty() const {        //check if the vector element is empty. return true if empty
            return element.empty();
        }
};

template <class T> void Stack<T>::push(T const& ele){
    element.push_back(ele);     //void push_back(const value_type& val)
                                    //Adds a new element at the end of the vector, after its current last element
                                    //The content of val is copied (or moved) to the new element.
                                    //this increases the size of the vector

}

template <class T> void Stack<T>::pop(){
    if(element.empty()) throw out_of_range("Stack<>::pop(): empty stack");
    
    element.pop_back();             //void pop_back()
                                    //remove the top element

}

template <class T> T Stack<T>::top() const{
    if(element.empty()) throw out_of_range("Stack<>::top(): empty stack"); 
   return element.back();            // return copy of last element
}


int main(){
    string a = "fjdslajfljsal;fjl;j";
    string b = ";loikpoip";
    try{
        Stack<int> intstack;        //stack of ints
        Stack<string> stringstack;  //stack of string
        Stack<double> doublestack;  //stack of double

        intstack.push(4);
        intstack.push(2);
        intstack.push(6);
        intstack.push(8);
        cout<<"Top of the stack is: "<<intstack.top() <<"\n";
        intstack.pop();
        intstack.pop();
        cout<<"Top of the stack (after 2 pops) is: "<<intstack.top()<<endl;



        stringstack.push(a);
        stringstack.push(b);
        cout<<stringstack.top()<<"\n";
        stringstack.pop();
        cout<<stringstack.top()<<"\n";
        stringstack.pop();
        stringstack.pop();
        stringstack.pop();
        cout<<stringstack.top()<<"\n";
    }
    catch(exception const& ex){     //you need to make references in order to use exception polymorphically
        cerr<<"Exception: "<<ex.what()<<"\n";

    }

    return 0;
}