/*You are given time in AM/PM format. Convert this into a 24 hour format.*/

#include <iostream>
#include <string>

int converter(int hour, int min, int sec, std::string apm){
    if(apm.compare("AM") && hour==12)
        std::cout << "00"<<min<<sec;

}


int main(){
    int hh, mm, ss;//hour, minute, seconds
    char c = ':';
    std::string s;
    std::cout<<"Enter a time h:m:s AM/PM: ";
    std::cin>>hh>>c>>mm>>c>>ss;
    getline(std::cin,s);
    converter(hh,mm,ss,s);
}