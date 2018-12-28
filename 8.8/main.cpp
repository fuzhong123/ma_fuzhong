#include <iostream>

using namespace std;

int main()
{
    //)a
    unsigned int values[size]={2,4,6,8,10};

    //)b
    unsigned int *vPer;

    //)c
    for(int i=0;i<size;i++)
    {
        cout<<values[i]<<endl;

    }

    //)d
    vPer=values;
    vPer=values[0];

    //)e
    for(int i=0;i<size;i++)
    {
        cout<<vPer+i<<endl;
    }

    //)f
    for(int i=0;i<size;i++)
    {
        cout<<values+i<<endl;
    }

    //g
    for (int i=0;i<size;i++)
    {
        cout<<vPer[i]<<endl;
    }

    //h
    values[4]
    *(values+4)
    *(vPer+4)
    vper[4]

    //i
    1002500+4*3=1002512
    8

    //j
    1002500
    2
    return 0;
}
