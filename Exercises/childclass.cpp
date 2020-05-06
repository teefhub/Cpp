#include <iostream>

//define a Box class 
class Box{
    protected:
        double width;
};

class SmallBox:Box{//declare a child class of class Box
    public:
        void setSmallWidth(double wid);
        double getSmallWidth();
};

void SmallBox::setSmallWidth(double wid){
    width=wid;
}

double SmallBox::getSmallWidth(void) {
   return width ;
}
 

// Main function for the program
int main() {
   SmallBox box;
 
   // set box width using member function
   box.setSmallWidth(5.0);
   std::cout << "Width of box : "<< box.getSmallWidth() << std::endl;
 
   return 0;
}