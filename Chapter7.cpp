#include <iostream>

int main() {
	//Arrays
	/*
	* Can help in managing several variables under one identity
	* group variables and manipulate them as one unit.
	* While C++ allows to read outside array boundaries, it could lead to either reading garbage data or crashing of program
	* we can also declare arrays as const
	* arrays store elements of same type
	* when we declare array, we are given bytes of memory of same size based on type of data to be stored in the array.
	*/
	/*
	int scores[10]; // an array of 10 integers
	const size_t COUNT{ 10 };
	size_t i{ 0 };
	for (; i < COUNT; i++) {
		scores[i] = i * 3;
	}
	i = 0;
	for (; i < COUNT; i++) {
		std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
	}
	*/
	//--------------------------------------------------------------------------------------------------------
	//Size of an array
	/*
	* c++ allows us to get size of array at the runtime using std::size
	*/
	/*
	int scores[]{ 10, 12, 15, 11, 18, 24 };
	std::cout << "size of scores: " << std::size(scores) << std::endl;
	std::cout << "size of scores: " << sizeof(scores) / sizeof(scores[0]) << std::endl;
	//range based for loop
	//use this if we need to use the values but don't care about the indices
	for (auto score : scores)
		std::cout << "element: " << score << std::endl;
	*/
	//-------------------------------------------------------------------------------------------------------------------
	//Array of characters
	/*
	* we can print an array of characters directly without having to make use of a loop
	* we need proper c strings. \0 character is called null termination string
	*/
	//we need '\0' otherwise garbage characters will be displayed
	/*
	char message[]{ 'H', 'e', 'l', 'l', 'o', '\0'};
	std::cout << "message: " << message << std::endl;

	//alternatively, keep size 1 number greater
	char message2[6]{ 'H', 'e', 'l', 'l', 'o' };
	std::cout << "message: " << message2 << std::endl;

	//string literals
	//implicitly adding null character string
	char message3[]{ "Hello" };
	std::cout << "message: " << message3 << std::endl;

	//printing this to show that character arrays are special
	int numbers[]{ 1,2,3,4,5,6,7,8 };
	std::cout << "numbers: " << numbers << std::endl;
	*/

	//----------------------------------------------------------------------------------------
	//data out of bounds of an array
	/*
	* If we try to modify something before or after the memory allocated for array, we might try to access locations being used by some other application
	* As such, we can either change the data being used by other programs or corrupt the data stored outside array bounds
	*/
	return 0;
}