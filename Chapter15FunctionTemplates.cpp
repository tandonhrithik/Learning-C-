#include<iostream>
#include<string>

template <typename T> 
T maximum(T a, T b);

template <typename T>
T multiply(T a, T b);

template <typename T> 
const T& minimum(const T& a, const T& b);

template<>
const char* maximum <const char*>(const char* a, const char* b);


int main() {

	//Function Templates are blueprints for functions
	//With multiple overloads, we are doing the same thing with different params
	//A lot of repetition of code due to repeated logic
	//Function templates help us solve this problem
	//These let the compiler fill up the details for the function

	/*
		Template <typename T>
		T maximum(T a, T b){
			return (a > b ) ? a : b ;
			}
	*/

	//Function templates are just blueprints and are not real C++ code
	//Compiler generates the C++ code using the template
	//Once a instance of template is generated, the compiler reuses it 
	//instead of re-generating new function using the same template
	//use cppinsights.io to see how compiler interprets and works with the function templates
	//It does not generate functions with all datatypes but only those that we need to use

	/*
	
	std::cout << sizeof(maximum(10, 20)) << std::endl;
	std::cout << sizeof(maximum(10.5, 20.5)) << std::endl;
	std::cout << (maximum("dog", "cat")) << std::endl;

	std::string s1{ "Hello" };
	std::string s2{ "World" };

	std::cout << (maximum(s1, s2)) << std::endl;

	std::cout << (multiply(10, 20)) << std::endl;
	std::cout << (multiply(2.5, 2.5)) << std::endl;

	//Below gives error because compiler cannot multiply two strings
	//std::cout << (multiply(s1, s2)) << std::endl;
	//Make sure the template instances generated do support the datatypes that we are using

	int x(2);
	double y(3.9);

	//Error because they are of different types. 
	//Our template only supports same type
	//maximum(x, y);

	//Function templates generate function template instances with the appropriate types
	//Using the debugger with templates.
	//Template functions don't always work properly. 
	//Use maximum using pointers
	//This won't work properly as since we use pointers, we'll compare pointers/addresses instead of dereferencing
	//We can see this all using the debugger
	*/
	//-------------------------------------------------------------------------------------------------------------

	//Template type deductions and explicit arguments
	//Template type deductions refers to the mechanism used to deduce the type of argument passed
	//Automatic deductions can have problems 
	//Example, if types are int and double instead of just int or just double.
	//As such, we can use explicit deductions
	//example, maximum<double>(a,b)
	//double is the type we want to generate our template instance
	//So now, we can support int and double arguments being passed
	//The comppiler now understands that we want double template instance being generated
	//So, we can use a wrapper to make use of implicit conversion within the template instance

	/*
	int a{ 25 };
	double b{ 26.65 };

	//auto result = maximum(a,b);
	//gives error

	auto result = maximum<double>(a, b);
	std::cout << result << std::endl;

	auto result2 = maximum<int>(a, b);
	std::cout << result2 << std::endl;

	*/

	//---------------------------------------------------------------------------------------------------
	//Template parameters by reference
	//Use template <typename T> const T& nameFunc(const T& a, const T& b)
	//template overloading can cause same problems as regular overloading
	//If we have one template by value and one by reference, 
	//Compiler will have problems deducing which one to use

	/*
	double a{ 35.5 };
	double b{ 22.5 };

	double min = 0;

	std::cout << "Inside address(a): " << &a << std::endl;
	min = minimum(a, b);
	*/

	//------------------------------------------------------------------------------------------------
	//Template specialization
	//Template specialization lets the compiler know that if I pass you this certain type, instead of 
	// defualt function, do This implementation


	/*
	std::cout << maximum<std::string>("Hello", "World") << std::endl;

	const char* a = "h";
	const char* b = "w";

	std::cout << maximum(a,b) << std::endl;
	*/


	//using pointers without template specialization can lead to comparison of addresses

	return 0;
}

template <typename T> T maximum(T a, T b) {
	return (a > b) ? a : b;
}

template <typename T> T multiply(T a, T b) {
	return a * b;
}
template <typename T> const T& minimum(const T& a, const T& b) {

	std::cout << "Outside Address: " << &a << std::endl;

	return (a < b) ? a : b;
}

template<>
const char* maximum<const char*>(const char* a, const char* b) {

	//to check return value
	std::cout << std::strcmp(a, b) << std::endl;


	//cmp return negative if b-a is positive(ASCII). this means that b is greater
	//The one that comes after the other is the greater one


	return ((std::strcmp(a, b)) > 0 ? a : b);
}

