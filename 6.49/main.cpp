#include <iostream>
using namespace std;
inline double circleArea(double r)
{
    return 3.1415926*r*r;
}
int main(int argc,char *argv[])
{
    double x;
    cout << "������Բ�İ뾶x(R:x>=0)...\nx=";
    cin>>x;
    if(x<0)
        {
        cout << "����";
        return 0;
    }
    cout << "Բ�����Ϊ " << circleArea(x) << endl;
    return 0;
}
