#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
public:
	Employee( const std::string &, const std::string &, const std::string & );
	virtual ~Employee() { } // virtual destructor
							
	void setFirstName( const std::string & );
	std::string getFirstName() const;

	void setLastName( const std::string & );
	std::string getLastName() const;

	void setSocialSecurityNumber( const std::string & );
	std::string getSocialSecurityNumber() const;

	// pure virtual function makes Employee an abstract base class
	virtual double earnings() const = 0; // pure virtual
	virtual void print() const; // virtual
								
private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
};

#endif
