#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    double a = 0.0;

    for(int i=1;i<=1000;i++)
    {
        a = 0.0;
        for(int j=1;j<=i;j++)
        {
            int factor = j%2==1 ?1:-1;
            a+=factor *(double(4)/(2*j-1));

        }

        cout<<"�� �Ľ���ֵΪ��"<<a<<endl;

    }
    return 0;
}
