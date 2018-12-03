#include <iostream>

using namespace std;

int main()
{
    int a=0,c=0,d=0;
    cout<<"Please enter the number you need to average :"<<endl;
    cin>>a;
    for (int b=1;a!=9999;b++)
        {
            a=a+d;
            c=a/b;
            d=a;
            cin>>a;

        }
        cout<<"The average of these numbers is :"<<c<<endl;
    return 0;
}
