#include "Nurse.h"

Nurse::Nurse(std::string hospital) {
	this->hospital = hospital;
}
void Nurse::printInfo() {

	std::cout << firstName << " " << lastName << " works at " << hospital;
}
