#include<iostream>
using namespace std;


int main()
{
    int n;
    int right;
    cout<<"����һ������"<<endl;
    cin>>n;
    cout<<"���������������Ϊ��"<<endl;
    do
    {
        right=n%10;
        cout<<right;
        n/=10;
    }
    while (n!=0);
}
