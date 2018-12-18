#include <iostream>

using namespace std;

int main()
{
    int base=0,exponent=0,integerPower=1;
    cout<<"Please input base "<<endl;
    cin>>base;
     cout<<"Please input exponent "<<endl;
     cin>>exponent;
    for(int i=0;i<exponent;i++)
        integerPower=integerPower*base;
    cout<<"integerPower(base,exponent)= "<<integerPower<<endl;
    return 0;
}
