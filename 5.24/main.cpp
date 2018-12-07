#include<iostream>
using namespace std;
int main()
{
	int a,i,j,n;
	cout<<"Please enter the number of rows in a diamond : ";
	cin>>a;
	n=a;


	for(i=1;i<=(n+1)/2;++i)
	{
	    for(j=1;j<=(n+1)/2-i;++j)
	    {
	        cout<<" ";
	    }
	    for(j=1;j<=2*i-1;++j)
		{
		    cout<<"*";
		}
	    cout<<endl;
	}
	for(i=1;i<=(n-1/2);++i)
	{
	    for(j=0;j<i;++j)
        {
            cout<<" ";
        }
	    for(j=1;j<=n-2*i;++j)
        {
            cout<<"*";
        }
		cout<<endl;
	}
	cout<<endl;

	return 0;
}
