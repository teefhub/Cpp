#include <iostream>

//Line class
class Line{
    public:
        void setLength(double len);//set the length 
        double getLength();//assign the length
        //Line();//this is the constructor. without parameters
        Line(double len);//parameters in constructor
    private:
        double length;
};

//calling the cosntructor to print out the text.
Line::Line(double len){
    //std::cout<<"Object is being created"<<std::endl;
    //length = len;//is the same as below. added with paramter constructor 

    std::cout << "Object is being created, length = " << len << std::endl;
}

void Line::setLength(double len){
    length = len;
}
double Line::getLength(){
    return length;
}

int main(){
    Line li1(10.0);//first object
    // set line length

   std::cout << "Length of line : " << li1.getLength() <<std::endl;
 
   return 0;
}