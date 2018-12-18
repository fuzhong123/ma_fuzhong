#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double hypotenuse=0.0,a=0.0,b=0.0;
    for(int i=1;i<=3;i++)
    {

    cout<<"Please enter the edge length of the triangle a "<<endl;
    cin>>a;
    cout<<"Please enter the edge length of the triangle b "<<endl;
    cin>>b;
    hypotenuse=sqrt(a*a+b*b);
    cout<<"The oblique edge length of a triangle = "<<hypotenuse<<endl;
    }
    return 0;
}
