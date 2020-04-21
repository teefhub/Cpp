/*
 * @Author: Tiffany Lee 
 * @Date: 2020-04-21 10:37:48 
 * @Last Modified by: Tiffany Lee
 * @Last Modified time: 2020-04-21 11:50:05
 */
/* find the max of an integral data set.
The program will ask the user to input the number of data values in the set and each value. Then your program will show the max of the data set. See example below.  Your C++ program will use a function that accepts the array of data values and its size. The return from the function is the pointer that points to the max value.
  Enter number of data values: 3
  Enter value 1: 21
  Enter value 2: 12
  Enter value 3: 4
  The max is 21. 
 */
#include <iostream>
using namespace std;
//finding the max int function, taking in the array and the number of input
int findingMaxValue(int array[], int inputNumber){
    int maxnumber = 0;//placeholder for max number atm
    //find the max numberr
    for(int i =0; i < inputNumber; i++){
        if(array[i]>=maxnumber)
            maxnumber = array[i];
    }
    return maxnumber;
}


//main function
int main(){
    //ask for number of input
    int datavalue;
    cout<<"Enter number of data values: ";
    cin>>datavalue;

    //iteration to increase the input number
    int arr[datavalue];//array of datavalue
    for(int i =0; i<datavalue;i++)//start at index 0
    {    cout<<"Enter value "<< i+1<<" :";//increase in input number till < datavalue number
        cin>>arr[i];//take in the value at array index 0
    }

    //finding max value
    int max = findingMaxValue(arr,datavalue);
    cout<<"The max value is:"<<max;    
    return 0;
}


