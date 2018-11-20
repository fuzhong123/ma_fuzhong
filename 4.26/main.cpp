#include <iostream>

using namespace std;

int main()
{
    int m,a,b,c,d,e;
    cout<<"Please enter a five digit number :";
    cin>>m;
    if (10000<=m<=99999)
    {
        a=m/10000;
        b=m%10000/1000;
        c=m%10000%1000/100;
        d=m%10000%1000%100/10;
        e=m%10000%1000%100%10;
    }
    else
        cout<<"You didn't enter five digits.";
        if(a==e&&b==d)
        cout<<"This number is palindrome.";
    return 0;
}
