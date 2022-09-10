//Hrithik Tandon's notes
#include<iostream>

int main() {
	//For Loop
	/*
	for (unsigned int i{0}; i < 10; i++) {
		std::cout << " I love C++ " << std::endl;
	}
	*/
	/*
	* size_t is used for iterators.it is a representation of unsigned int type.
	* using for(size_t i{}; i < 10; i++)
	* the i is only usable within the loop. To access it outside, make sure to declare i outside the loop
	* It is also a bad practice to use hard coded values such as <10
	* Use const size_t count{10} instead and then use i < count in order to make it easier to maintain the code.
	*/
	/*
	const size_t count = 10;
	for (size_t i{ 0 }; i < count; i++) {
		std::cout << " I love C++ " << std::endl;
	}
	*/
	//-------------------------------------------------------------------------------
	//While Loop
	/*
	const size_t count{ 10 };

	size_t i{ 0 };

	while (i < count) {
		std::cout << i << " : I love C++" << std::endl;
		i++;
	}
	*/

	//------------------------------------------------------------------------------------------
	//Do while
	/*
	const size_t count{ 10 };

	size_t i{ 0 };

	do {
		std::cout << i << " : I love C++" << std::endl;
		i++;
	} while (i < count);
	*/
	return 0;
}
