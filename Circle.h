#pragma once
#include "Oval.h"
class Circle:public Oval
{
public:
	Circle() = default;
	Circle(double radius, std::string description);
	~Circle();
	
	 virtual void draw() const override{
		std::cout << "Circle::draw() called. Drawing " << description <<
			" with radius: " <<get_x_rad() << std::endl;

	}

};

