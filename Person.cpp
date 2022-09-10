#include"person.h"

Person::Person() {
	std::cout << "default constructor for Person called" << std::endl;
	firstName = "unknown";
	lastName = "unknown";
}

Person::Person(std::string firstName, std::string lastName, int age) {
	std::cout << "default constructor for Person called" << std::endl;
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
}
Person::~Person() {
	std::cout << "default destructor for Person called" << std::endl;
}
Person::Person(const Person& source) {
	firstName = source.firstName;
	lastName = source.lastName;
	age = source.age;
}
void Person::printInfo() {
	std::cout << std::endl;
	std::cout << firstName << " " << lastName << ", age: " << age;
}

std::string Person::getFirstName() {
	return firstName;
}

std::string Person::getLastName() {
	return lastName;
}

Person* Person::setFirstName(std::string firstName) {
	this->firstName = firstName;
	return this;
}

Person* Person::setLastName(std::string lastName) {
	this->lastName = lastName;
	return this;
}