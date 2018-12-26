#include <iostream>
using namespace std;
inline double circleArea(double r)
{
    return 3.1415926*r*r;
}
int main(int argc,char *argv[])
{
    double x;
    cout << "请输入圆的半径x(R:x>=0)...\nx=";
    cin>>x;
    if(x<0)
        {
        cout << "错误";
        return 0;
    }
    cout << "圆的面积为 " << circleArea(x) << endl;
    return 0;
}
