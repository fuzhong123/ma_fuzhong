#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x=0.00,y=0.00;
    for(int i=1;i<5;i++)
    {
        cin>>x;
        y=floor(x+0.5);
        cout<<"Raw value      "<<x<<endl;
        cout<<"Rounded values "<<y<<endl;
    }
    return 0;
}
