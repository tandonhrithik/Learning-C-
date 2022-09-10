#include "Engineer.h"
Engineer::Engineer() {
	std::cout << "default constructor for Engineer called" << std::endl;

}
Engineer::~Engineer() {
	std::cout << "default destructor for Engineer called" << std::endl;

}
Engineer::Engineer(std::string firstName, std::string lastName, int age, int contract_count):
	Person(firstName, lastName, age)
{
	std::cout << "default constructor for Engineer called" << std::endl;
	this->contract_count = contract_count;
}
Engineer::Engineer(const Engineer& source):
	Person(source)
{
	this->contract_count = source.contract_count;
}
void Engineer::printInfo(){
	Person::printInfo();
	std::cout << " contract count: " << contract_count;
}
