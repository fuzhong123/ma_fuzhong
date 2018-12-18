#include <iostream>
using namespace std;
int main()
{


float Charge1=0.00,Charge2=0.00,Charge3=0.00, a=0.0,b=0.0,c=0.0,TotalPark=0.0,TotalCharge=0.00;

cin>>a>>b>>c;



      if(a<3.0)
      {
       Charge1=2.00;
      }
      else
      {
      Charge1=2.00+((float)a -3.00)*0.50;
      if(Charge1>10.00)
      Charge1=10.00;
      }





      if(b<3.0)
      {
       Charge2=2.00;
      }
      else
      {
      Charge2=2.00+((float)b -3.00)*0.50;
      if(Charge2>10.00)
      Charge2=10.00;
      }




      if(c<3.0)
      {
       Charge3=2.00;
      }
      else
      {
      Charge3=2.00+((float)c -3.00)*0.50;
      if(Charge3>10.00)
      Charge3=10.00;
      }
      TotalPark=a+b+c;
      TotalCharge=Charge1+Charge2+Charge3;


cout<<"Car"<<" "<<"Hours"<<"     "<<"Charge"<<endl;
cout<<"1"<<"      "<<a<<"         "<<Charge1<<endl;
cout<<"2"<<"      "<<b<<"         "<<Charge2<<endl;
cout<<"3"<<"      "<<c<<"         "<<Charge3<<endl;
cout<<"TATOL"<<"  "<<TotalPark<<"     "<<TotalCharge<<endl;
}

