#include<iostream>
#include <vector>
int positive_sum (const std::vector<int> arr){
    int sum =0;
   if(arr.empty()){
        return 0;
    }


    for(int i = 0; i < arr.size(); i++){
          if(arr[i]>0){
                sum += arr[i];
        }
    }
    return sum;
}

int main(){
    int input;
    std::vector<int> array;
    while(cin >> input){
        array.push_back(input);
    }
    positive_sum(array);
}