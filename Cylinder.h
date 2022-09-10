#ifndef Cylinder_h
#define Cylinder_h
#include"Constants.h"
 // !Cylinder.h

class Cylinder {
	//Member variables
	//member variables should be kept private
private:
	double baseradius{ 1 };
	double height{ 5 };
	//functions
public:
	/*
	Cylinder() {
		baseradius = 2;
		height = 2;
	}
	*/
	Cylinder() = default;
	Cylinder(double r, double h);

	double volume();

	double getheight();
	double getradius();

	void setheight(double h);
	void setradius(double r);

};

#endif
