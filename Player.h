#pragma once
#ifndef Player_h
#define Player_h
#include<iostream>
#include<string>
#include"Person.h"

class Player :public Person
{
	friend std::ostream& operator<<(std::ostream& out, const Player& player);

public:
	Player() = default;
	Player(std::string fname, std::string lname, std::string game);
	~Player();
	void printInfo();
private:
	std::string game{ "None" };
};
#endif // !Player_h
