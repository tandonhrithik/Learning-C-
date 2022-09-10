#ifndef Civil_H
#define Civil__H
#include"Engineer.h"

class CivilEngineer:public Engineer
{
public:
	CivilEngineer();
	CivilEngineer(std::string firstName, std::string lastName, int age, int contract_count, std::string specialty);
	~CivilEngineer();
	virtual void printInfo() override;
protected:
	std::string returnJob() {
		//return job;
		//cannot see job since its private to engineer class
	}
	std::string returnName() {
		return this->getFirstName(); //We can use this cuz we have using protected keyword in engineer class
	}
	std::string returnLName() {
		//return this->getLastName(); 
		//This does not work due to getLastName being privately inherited to Engineer
	}
	std::string specialty;
};

#endif // !1