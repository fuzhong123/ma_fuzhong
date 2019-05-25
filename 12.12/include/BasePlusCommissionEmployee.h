#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( const std::string &, const std::string &,
      const std::string &, int, int, int, double = 0.0, double = 0.0,
      double = 0.0 );
   virtual ~CommissionEmployee() { }

   void setBaseSalary( double );
   double getBaseSalary() const;

   virtual double earnings() const override;
   virtual void print() const override;
private:
   double baseSalary;
};

#endif
