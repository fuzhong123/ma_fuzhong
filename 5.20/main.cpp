#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    for (c=1;c<=500;++c)
    {
        for (b=1;b<500;++b)
        {
            for (a=1;a<=500;++a)
            {
                if ((a*a+b*b == c*c))
                {
                    cout<<a<<" "<<b<<" "<<c<<endl;
                }
            }
        }
    }
    return 0;
}
