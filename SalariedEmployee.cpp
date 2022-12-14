#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h"
using namespace std;

// constructor
SalariedEmployee::SalariedEmployee( const string &first,
	const string &last, const string &ssn, double salary )
	: Employee( first, last, ssn )
{
	setWeeklySalary( salary );
}

// set salary
void SalariedEmployee::setWeeklySalary( double salary )
{
	if ( salary >= 0.0 ) {
		weeklySalary = salary;
	} else {
		throw invalid_argument( "Weekly salary must be >= 0.0" );
	}
}

// return salary
double SalariedEmployee::getWeeklySalary() const
{
	return weeklySalary;
}


// override pure virtual function earnings in Employee
double SalariedEmployee::earnings() const
{
	return getWeeklySalary();
}

void SalariedEmployee::print() const
{
	cout << "salaried employee: ";
	Employee::print(); // reuse abstract base-class print function
	cout << "\nweekly salary: " << getWeeklySalary();
}



