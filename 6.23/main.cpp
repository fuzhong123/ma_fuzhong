#include <iostream>

using namespace std;

int main()
{
    int side;
    string fillCharaceter;
    cout<<"Please enter character symbols "<<endl;
    cin>>fillCharaceter;
    cout<<"Please enter the side length "<<endl;
    cin>>side;
    for(int i=1;i<=side;i++)
    {
        for(int j=1;j<=side;j++)
        {
            cout<<fillCharaceter;
        }
        cout<<endl;
    }
    return 0;
}
