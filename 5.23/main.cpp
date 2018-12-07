#include<iostream>
using namespace std;
int main()
{
	int i,j,n=5;
	for(i=1;i<=5;++i)
	{
	    for(j=1;j<=n-i;++j)
	    {
	        cout<<" ";
	    }
	    for(j=1;j<=2*i-1;++j)
		{
		    cout<<"*";
		}
	    cout<<endl;
	}
	for(i=1;i<=4;++i)
	{
	    for(j=0;j<i;++j)
        {
            cout<<" ";
        }
	    for(j=1;j<=9-2*i;++j)
        {
            cout<<"*";
        }
		cout<<endl;
	}
	cout<<endl;

	return 0;
}
