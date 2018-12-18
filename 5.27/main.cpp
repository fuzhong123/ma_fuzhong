#include <iostream>
using namespace std;

int main()
{
    unsigned int count;

    for (unsigned int count=1;count<=10;++count)
    {

        if(count==5)

            goto logo;

            cout<<count<<" ";
            logo:  ;

    }

    cout<<"\nUsed continue to skip priting 5"<<endl;
    return 0;
}
