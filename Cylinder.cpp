#include "Cylinder.h"

Cylinder::Cylinder(double r, double h) {
	baseradius = r;
	height = h;
}

//Cylinder:: scope resolution operator. Lets them know ehre the function lives.
double Cylinder::volume() {
	return PI * baseradius * baseradius * height;
	}
double Cylinder:: getheight(){
		return height;
	}
double Cylinder::getradius() {
		return baseradius;
	}
void Cylinder::setheight(double h) {
		height = h;
	}
void Cylinder::setradius(double r) {
		baseradius = r;
	}
