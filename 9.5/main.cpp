#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
public:
   Complex( double = 0.0, double = 0.0 );
   Complex add( const Complex & );
   Complex subtract( const Complex & );
   void printComplex();
   void setComplexNumber( double, double );
private:
   double realPart;
   double imaginaryPart;
};
#endif

#include <iostream>
using std::cout;
#include "Complex.h"
Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );
}
Complex Complex::add( const Complex &right )
{
   return Complex(
      realPart + right.realPart, imaginaryPart + right.imaginaryPart );
}

Complex Complex::subtract( const Complex &right )
{
   return Complex(
      realPart - right.realPart, imaginaryPart - right.imaginaryPart );
}
void Complex::printComplex()
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';
}
void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;
   imaginaryPart = ip;
}

#include <iostream>
using std::cout;
using std::endl;
#include "Complex.h"
int main()
{
   Complex a( 1, 7 ), b( 9, 2 ), c;
   a.printComplex();
   cout << " + ";
   b.printComplex();
   cout << " = ";
   c = a.add( b );
   c.printComplex();
   cout << '\n';
   a.setComplexNumber( 10, 1 );
   b.setComplexNumber( 11, 5 );
   a.printComplex();
   cout << " - ";
   b.printComplex();
   cout << " = ";
   c = a.subtract( b );
   c.printComplex();
   cout << endl;
   return 0;
}
