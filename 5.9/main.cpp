#include <iostream>

using namespace std;

int main()
{
    int a=0,c=1,d=0,e=1,f=0;

    for(int b=1;b<=15;b++,c++)
    {

        d=c%2;
        if (d!=0)
        {

            f=c*e;
            e=f;
        }

    }
    cout<<"The product of odd numbers in 1 to 15 :"<<f<<endl;
    return 0;
}
