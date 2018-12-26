#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    int a=0,b=0;
    for(int flip=0;flip<100;flip++)
    {
        int face=rand()%2;
        switch(face)
    {   case 1:
            a++;
            break;
        case 0:
            b++;
            break;
        default:
            cout<<"´íÎó"<<endl;
    }
    }
    cout<<"Face"<<setw(13)<<"´ÎÊý"<<endl;
    cout<<"   1"<<setw(13)<<a<<endl;
    cout<<"   0"<<setw(13)<<b<<endl;
        return 0;
}
