#ifndef shape_h
#define shape_h
#include<iostream>
#include<string>

class Shape
{
public:
	Shape() {
		count++;
	}
	Shape(std::string source);
	~Shape();

	virtual void draw() const = 0;
	virtual void draw(int colordepth) const = 0;
	virtual int getCount() const = 0;
	static int count;
protected:
	std::string description;
};
#endif
