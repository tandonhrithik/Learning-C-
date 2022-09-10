#include "Shape.h"

int Shape::count{ 0 };
Shape::Shape(std::string description) {
	this->description = description;
	count++;
}
Shape::~Shape() {

}
