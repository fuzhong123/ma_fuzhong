#include <iostream>

using namespace std;

int main()

{
int i=1,a=0,b=0,x=0;

cout<<"Enter ten numbers :"<<endl;
while(i<=10)
{
    cin>>x;

    if (x>a)
        {
             b=a;
             a=x;
        }

    else if (x>b)
        b=x;

cout<<"Maximum value="<<a<<"Sub-maximum value="<<b<<endl;

    i++;
}

return 0;

}
