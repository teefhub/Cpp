#include <iostream>

//Line class
class Line{
    public:
        void setLength(double len);//set the length 
        double getLength();//assign the length
        Line(double len);//parameters in constructor
        ~Line();//class deconstructor, take in no para
    private:
        double length;
};

//calling the cosntructor to print out the text.
Line::Line(double len){
    std::cout << "Object is being created, length = " << len << std::endl;
}

Line::~Line(){
    std::cout << "Object is being deleted";
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