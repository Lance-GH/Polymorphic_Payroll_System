#ifndef SALARIED_H
#define SALARIED_H

#include <string>
#include "Employee.h"

class SalariedEmployee : public Employee
{
public:
	SalariedEmployee( const std::string &, const std::string &, const std::string &, double = 0.0 );
	virtual ~SalariedEmployee() { } // virtual destructor
								
	void setWeeklySalary( double );
	double getWeeklySalary() const;

	// keyword virtual signals intent to override
	virtual double earnings() const override;
	virtual void print() const override;

private:
	double weeklySalary;
};

#endif
