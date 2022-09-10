#include "CivilEngineer.h"
CivilEngineer::CivilEngineer() {
	std::cout << "default constructor for CivilEngineer called" << std::endl;

}
CivilEngineer::CivilEngineer(std::string firstName, std::string lastName, int age, int contract_count, std::string specialty):
	Engineer(firstName, lastName, age, contract_count)
{
	std::cout << "default constructor for CivilEngineer called" << std::endl;
	this->specialty = specialty;
}
void CivilEngineer::printInfo() {
	Engineer::printInfo();
	std::cout << ", Specialty: " << specialty;
}
CivilEngineer::~CivilEngineer(){
	std::cout << "default destructor for CivilEngineer called" << std::endl;

}
