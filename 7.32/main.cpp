#include <iostream>
#include <array>
#include <iomanip>
using namespace std;
int recursiveMinimum(int a[],int m);
int main()
{
    int a[10];
    int n;
    cout<<"请输入数目：";
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cout<<"请输入array中的数："<<endl;
        cin>>a[i];
    }
    cout<<"最小的数为 :"<<recursiveMinimum(a,n);
    return 0;
}
int recursiveMinimum(int a[],int m)
{
    int c ;
    if(m==1)
        return a[0];
    c=recursiveMinimum(a,m-1);
    if(c<=a[m-1])
        return c;
    else
        return a[m-1];
}
