#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;    //create a vector to store int 
    int i;              //counter for loops
    cout<<"Vector size is "<<vec.size()<<"\n";  //initial size is 0
    for(i = 0;i < 5;i++){       //push 5 elements to vector
        vec.push_back(i);
    }

    cout<<"Vector size is (after 5 pushes) "<<vec.size()<<"\n";  //display the new size of the vectior

    for(i = 0; i <vec.size();i++){
        cout<<"value of vec ["<<i<<"] = "<<vec[i]<<endl;
    }
    //or you can use stl of iterator to access the value.
    vector<int>::iterator iteratorofvector;      // Declaring iterator to a vector 
    iteratorofvector = vec.begin();
    while(iteratorofvector!=vec.end()){
        cout<<"value of vec = "<<*iteratorofvector<<"\n";
        iteratorofvector++;
    }
    return 0;
}