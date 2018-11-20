#include <iostream>

using namespace std;

int main()
{
    double a=0,b=0,c=0;
    cout<<"Please input the three sides of the triangle :";
    cin>>a,b,c;
    if(a+b>c&&a+c>b&&b+c>a)
        cout<<"It can represent triangle ";
        else
        cout<<"It can not represent a triangle";
    return 0;
}
