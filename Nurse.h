#pragma once
#ifndef Nurse_H
#define Nurse_H
#include<iostream>
#include"Person.h"

class Nurse : private Person
{
public:
	Nurse() = default;
	Nurse(std::string Hospital);

	void printInfo();
private:
	std::string hospital;
};

#endif // !Nurse_H

