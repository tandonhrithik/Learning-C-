#ifndef Person_h
#define Person_h
#include<string>
#include<iostream>

class Person {
	friend std::ostream& operator<<(std::ostream& out, const Person& person);
public:
	Person();
	Person(std::string firstName, std::string lastName, int age);
	Person(const Person& source);
	~Person();
	virtual void printInfo();
	//Getters
	std::string getFirstName();
	std::string getLastName();

	//Setters
	Person* setFirstName(std::string firstName);
	Person* setLastName(std::string firstname);
protected:
	std::string firstName;
	std::string lastName;
	std::string Job;
private:
	int age;
};
#endif