#include <iostream>
#include <math.h>
using namespace std;




int main()
{
    double a,b,c,d;


    cout<<"�������һ��������(x1��y1)��"<<endl;
    cin>>a>>b;
    cout<<"������ڶ���������(x2��y2)��"<<endl;
    cin>>c>>d;
    double x=(c-a)*(c-a)+(d-b)*(d-b);
    double r;
    r=sqrt(x);
    cout<<r;
    return 0;
}
