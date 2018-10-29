#include<iostream>
  using namespace std;
  int main()

{
  int x=0, xx=0, y=0, k=0;
  cout<<"Please enter binary numbers £º";
  cin>>x;
  xx=x;
  y=0;
  k=1;
  while ( xx )
  {
  y+=k*xx%10;
  k*=2;
  xx/=10;
  }
  cout<<x<<"The decimal number is "<<y<<endl;
  return 0;
}
