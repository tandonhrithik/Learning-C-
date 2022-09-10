#pragma once
#ifndef Engineer_h
#define Engineer_h
#include<iostream>
#include"Person.h"

class Engineer:public Person
{
public:
	Engineer();
	Engineer(std::string firstName, std::string lastName, int age, int contract_count);
	~Engineer();
	Engineer(const Engineer& source);
	virtual void printInfo() override;
protected:
	using Person::getFirstName;	
	std::string returnJob() {
		return Job;
	}
	int contract_count;

};

#endif // !1