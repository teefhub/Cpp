#include <iostream>
#include <vector>
#include <string>

using namespace std;

void insertionsort(vector <int> vector){
    int i, key, j;  
    for (i = 1; i < vector.size(); i++) 
    {  
        key = vector[i];  
        j = i - 1;  
        while (j >= 0 && vector[j] > key) 
        {  
            vector[j + 1] = vector[j];  
            j = j - 1;  
        }  
        vector[j + 1] = key;  
    }
}

string printVector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i] << " ";
    }
    cout<<endl;
}

int main(){
    vector<int> v = {5,2,1,6,3,4};
    printVector(v);
    insertionsort(v);
    printVector(v);
}

