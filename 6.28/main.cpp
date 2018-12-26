#include <iostream>

using namespace std;



    int isperfect(int n)
    {
        int s=0,i=0;

    for(i;i<n;i++)
    {
        if(n%i==0)
            s+=i;

    }
    if(s==n)
        return 1;
        else
        return 0;
}
int main()
{

    for(int j=1;j<=1000;j++)
    {
        if(isperfect(j)==1)
            cout<<j<<"是完数"<<endl;
        else
            cout<<j<<"不是完数"<<endl;
    }



    return 0;
}
