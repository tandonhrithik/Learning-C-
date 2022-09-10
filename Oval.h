#pragma once
#include "Shape.h"
class Oval:public Shape
{
public:
	Oval() = default;
	Oval(double xradius, double yradius, std::string description);
	~Oval();

	virtual void draw() const override{
		std::cout << "Oval::draw() called. Drawing " << description << " with radius x" << radius1
			<< "and radiusy " << radius2 << std::endl;
	}
	virtual void draw(std::string s) const {
		std::cout << "Oval::draw() 2 called. Drawing " << description << " with radius x" << radius1
			<< "and radiusy " << radius2 << std::endl;
	}

protected:
	double get_x_rad() const {
		return radius1;
	}
	double get_y_rad() const {
		return radius2;
	}
private:
	double radius1{0.0};
	double radius2{0.0};
};

