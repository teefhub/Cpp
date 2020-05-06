#include <iostrea>
using namespace std;

class Box{
    public:
    //define a constructor
    Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }

    ~Box(){
        cout<<"Constructor is deleted";
    };

    double Volume(){
        return length * breadth * height;
      }
    

};

int main(){

}