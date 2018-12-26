#include<iostream>
using namespace std;


int main()
{
    int n;
    int right;
    cout<<"输入一个数："<<endl;
    cin>>n;
    cout<<"这个数字逆序后的数为："<<endl;
    do
    {
        right=n%10;
        cout<<right;
        n/=10;
    }
    while (n!=0);
}
