#include <iostream>

//define a Box class 
class Box{
    public:
        double length;
        double breadth;
        double height;
        double getVolume();// Member functions declaration
        void setLength(double len);// Member functions declaration
        void setBreadth(double bre);// Member functions declaration
        void setHeight(double hei);// Member functions declaration
};

double Box::getVolume(){
    return length*breadth*height;
}

void Box::setLength(double len){
    length=len;
}

void Box::setBreadth(double bre){
    breadth=bre;
}

void Box::setHeight(double hei){
    height=hei;
}


int main(){
    Box Box1;//declare box1 as type Box (think like int)
    Box Box2;
    double volume = 0.0;//to store the volume of the box

    /*Box1 
    Box1.breadth = 5;
    Box1.height = 6;
    Box1.length = 7;*/

  // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);

    //volume of box 1
    volume = Box1.breadth*Box1.height*Box1.length;
    std::cout << "Volume of Box1 : " << volume <<std::endl;

    // volume of box 2
    volume = Box2.height * Box2.length * Box2.breadth;
    std::cout << "Volume of Box2 : " << volume <<std::endl;
    return 0;
}