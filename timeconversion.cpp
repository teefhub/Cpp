#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int hours,mins,seconds; 
 bool status = true;
 
 cout << "Enter Hours (00-23): "; cin >> hours;
 cout << "Enter Minutes (00-59): "; cin >> mins;
 cout << "Enter Seconds (00-59): "; cin >> seconds;
 if((hours >= 24 || hours < 0))
 { cout<<"\nInvalid Hours.."; status=false; }
 if((seconds >= 60 || seconds < 0))
 { cout<<"\nInvalid Seconds.."; status=false; }
 if((mins >= 60 || mins < 0))
 { cout<<"\nInvalid Minutes.."; status=false; }
 if(status)
 {
 cout<<"\n24 Hours Format\n";
 cout << "Hours: " << hours << endl;
 cout << "Minutes: " << mins << endl;
 cout << "Seconds: " << seconds << endl;
 
 if(hours > 12)
 { hours-=12; }
 cout<<"\n\n12 Hours Format\n";
 cout << "Hours: " << hours << endl;
 cout << "Minutes: " << mins << endl;
 cout << "Seconds: " << seconds << endl;
 }
 return 0;
}