#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a=0,b=0,c=0,d=0;
    cout<<"Please enter an integer a :";
    cin>>a;
    cout<<"Please enter the number of minimum values you need to find :";
    for(int counter=0;counter<a;counter++)
    {  cin>>b;
       c=min (b,d);
       d=c;
    }
    cout<<"The smallest number is :"<<c<<endl;
    return 0;
}
