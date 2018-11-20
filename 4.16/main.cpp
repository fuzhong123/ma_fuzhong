#include <iostream>

using namespace std;

int main()
{
  float a=0,b=0,c=0;
      cout<<"Enter hours worked (-1 to end):";
      cin>>a;
  while (a!=-1)
  {   if (a<=40)
      {
      cout<<"Enter hourly rate of the employee ($00.00):";
      cin>>b;
      c=a*b;
      cout<<"Salary is $ "<<c<<endl;
      cout<<"Enter hours worked (-1 to end):";
      cin>>a;
       }


       else
       {

      cout<<"Enter hourly rate of the employee ($00.00):";
      cin>>b;
      c= 40*b +(a-40)*1.5*b;
      cout<<"Salary is $ "<<c<<endl;
      cout<<"Enter hours worked (-1 to end):";
      cin>>a;
       }

  }
    return 0;
}
