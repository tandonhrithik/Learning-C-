#ifndef DOG_H
#define DOG_H



#include "Dog.h"
#include <iostream>
Dog::Dog() {
	dname = "Nil";
	dbreed = "Nil";
	dage = new int;
	*dage = 0;
	std::cout << "Constructor called for " << dname << "constructed at " << this << std::endl;
}
Dog::Dog(std::string name, std::string breed, int age) {
	dname = name;
	dbreed = breed;
	dage = new int;
	*dage = age;
	std::cout << "Constructor called for " << dname << "constructed at " << this << std::endl;
}
Dog::~Dog() {
	delete dage;
	std::cout << "dog destructor called for " << dname << std::endl;
}
Dog* Dog::set_name(const std::string & dname) {
	this->dname = dname;
	return this;
}
Dog* Dog::set_breed(const std::string& dbreed) {
	this->dbreed = dbreed;
	return this;
}
Dog* Dog::set_age(int age) {
	if (this->dage) {
		*(this->dage) = age;
	}
	return this;
}
void Dog::printinfo() {
	std::cout << "name: " << dname << ", breed: " << dbreed << ", age:" << *dage << std::endl;
}
#endif // !DOG_H