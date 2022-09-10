#include<iostream>
#include<string>

int main() {
	//Labmda Functions are used to set up anonymous functions(without names)
	//Anonymous Functions can be given multiple names or be used even without names

	//Lamda function template/signature:
	/*
	* [capture list] (parameters) -> return type{
		DothisStuff;
	};
	example:
	[](){
	std::cout << " Hello World!" << std::endl;
	};
	We can omit the return type and the compiler will deduce it for us
	*/

	/*
	//Below we have different ways to declare and use a lambda function

	//We can  declare it without giving it a name
	//However, to use it, we have to assign it a name


	[]() {
		std::cout << " Hello World!" << std::endl;
	};

	//We can declare it to have a name
	auto func = []() {
		std::cout << " Hello World!" << std::endl;
	};
	func();

	//To use it without a name, add () at the end
	//one time use unless we want to repeat code

	[]() {
		std::cout << " Hello World!" << std::endl;
	}();

	//using parameters with no return type
	[](double a, double b) {
		std::cout << a + b << std::endl;
	}(12.55, 13.47);

	//using return with auto variable
	auto result1 = [](double a, double b) {
		return (a > b) ? a : b;
	} (12.45, 13.55) ;

	std::cout << result1 << std::endl;
	//using it directly within cout


	std::cout <<
		[](double a, double b) {
		return (a > b) ? a : b;
	} (12.45, 13.55)
		<< std::endl;

	//declaring return type

	auto result2 = [](double a, double b) -> int {
		return a + b;
	}(12.56, 13.23);

	std::cout << result2 << std::endl;
	*/

	//----------------------------------------------------------------------------------------------
	//Capture list
	//Lambda functions cannot use variables outside its scope
	//As such, we can make use of capture lists in order to make use of variables
		//declared outside the scope of lambda function

	/*
	double a{ 12.4 };
	double b{ 13.5 };
	int c{ 42 };


	auto func = [a, b]() {
		return a + b;
	};

	//capture lists use a copy of the argument passed
	// As such, any changes to arguments passed outside the scope are not picked up
	//capture by value

	auto func2 = [c]() {
		std::cout << "inner value: " << c << std::endl;
	};

	for (size_t i{ 0 }; i < 5; i++) {
		std::cout << "Outer Value: " << c << std::endl;
		func2();
		++c;
	}

	std::cout << "\nCapturing by reference" << std::endl;
	//Capture by reference
	auto func3 = [&c]() {
		std::cout << "inner value: " << c << std::endl;
	};

	for (size_t i{ 0 }; i < 5; i++) {
		std::cout << "Outer Value: " << c << std::endl;
		func3();
		++c;
	}
	*/

	//---------------------------------------------------------------------------------------------------------------------
	//Capture All in Context
	//We can capture everything outside the context
	//use [=] in the capture list 
	int c{ 42 };

	// use = to capture all by value
	auto func = [=]() {
		std::cout << "Inner value: " << c << ", Inner Address: " << &c << std::endl;
	};
	func();
	std::cout << "Outer Value: " << c << ", Outer Address: " << &c << std::endl;

	//We can use & to capture all by reference

	int d{ 5 };

	auto func2 = [&]() {
		std::cout << "\nInner value: " << d << ", Inner Address : " << &d << std::endl;
	};
	func2();
	std::cout << "Outer Value: " << d << ", Outer Address: " << &d << std::endl;

	return 0;
}