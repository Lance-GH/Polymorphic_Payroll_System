// Abstract-base-class Employee
#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee( const string &first, const string &last, const string &ssn)
	: firstName( first ), lastName( last ), socialSecurityNumber (ssn )
{

}

// set first name
void Employee::setFirstName( const string &first )
{
	firstName = first;
}

string Employee::getFirstName() const
{
	return firstName;
}

// set last name
void Employee::setLastName( const string &last )
{
	lastName = last;
}

// return last name
string Employee::getLastName() const 
{
	return lastName;
}

void Employee::setSocialSecurityNumber( const string &ssn )
{
	socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

// print Employees info (virtual, but not pure virtual)
void Employee::print() const
{
	cout << getFirstName() << ' ' << getLastName()
		<< "\nsocial security number: " << getSocialSecurityNumber();
}
