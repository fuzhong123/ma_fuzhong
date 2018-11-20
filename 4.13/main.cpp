#include <iostream>

using namespace std;

int main()
{
    float miles,num,sum1=0,sum2=0;
        cout<<"Enter miles driven (-1 to quit) :";
        cin>> miles;
    while (miles!=-1)
    {

        cout<<"Enter gallons used:";
        cin>> num;
        cout<<"MPG this trip :"<<miles/num<<endl;
        sum1+=miles,sum2+=num;
        cout<<"Total MPG:"<<sum1/sum2<<endl;
        cout<<"Enter miles driven (-1 to quit) :";
        cin>> miles;


    }
    return 0;
}
