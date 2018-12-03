#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;
    cout<<"Please enter an integer a :";
    cin>>a;
    cout<<"Please enter the number that you need to sum :";
    for(int counter=0;counter<a;counter++)
    {cin>>b;
        c=b+c;
    }
    cout<<"The sum of these numbers is :"<<c<<endl;
    return 0;
}
