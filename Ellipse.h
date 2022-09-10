#pragma once
#include "Shape.h"
class Ellipse:public Shape
{
public:
	Ellipse() {
		count++;
	}

	Ellipse(int a, int b, std::string desc) :
		Shape(desc) {
		l = a;
		w = b;
		count++;
	}
	virtual void draw() const override;
	virtual void draw(int color) const override;

	virtual int getCount() const override {
		return count;
	}
	static int count;

private:
	int l{0};
	int w{0};
};

