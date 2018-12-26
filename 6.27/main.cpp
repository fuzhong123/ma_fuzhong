#include <iostream>

using namespace std;

int main()
{
    double a,b,c,x;
    cout<<"请输入三个数："<<endl;
    cin>>a>>b>>c;
    if(a>b)
        x=b;
    else
        x=a;
    if(x>c)
        cout<<"最小值为："<<c;
    else
        cout<<"最小值为："<<x;
    return 0;
}
