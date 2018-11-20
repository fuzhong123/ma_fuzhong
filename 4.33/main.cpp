#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;
    cout<<"Please input three sides of triangle :";
    cin>>a>>b>>c;

    if (a*a+b*b==c*c)
    cout<<"It can represent right triangle.";
    else if(a*a+c*c==b*b)
    cout<<"It can represent right triangle.";
    else if(b*b+c*c==a*a)
    cout<<"It can represent right triangle.";
    else
    cout<<"It can not represent right triangle.";
    return 0;
}
