#include "Oval.h"

Oval::Oval(double x_radius, double y_radius,
	std::string description) :
	Shape(description)
{
	radius1 = x_radius;
	radius2 = y_radius;
}

Oval::~Oval() {


}