#include <iostream>

using namespace std;

int main()
{
    int iseven=0,a=0,b=2;
    for(int i=1;i<10;i++)
    {
        cin>>a;
        iseven=a;
        if (iseven%b==0)
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;

    }
    return 0;
}
