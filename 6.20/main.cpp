#include <iostream>

using namespace std;

int main()
{
    int a,b;

    for(int i=1;i<5;i++)
    {
        cin>>a>>b;
        if(b%a==0)
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;
    }

    return 0;
}
