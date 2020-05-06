#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>oct>>n;//An input value of 10 will be interpreted as an octal, which corresponds to a decimal value of 8.
    cin>>hex>>m;//Here, any input will be interpreted as a hexadecimal, enabling input such as f0a or -F7.
    cout<<n<<endl;
    cout<<m;
}