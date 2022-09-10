//Hrithik Tandon's Notes
#include<iostream>
#include <iomanip>
int main() {
			/*
			* Data types
			* void is a typeless type
			* auto is a keyword used to deduce other types
			*/
			//--------------------------------------------------------------------
			//Number systems

			/*
			* Decimal systems: base 10
			* for instance, 2371 = 2 x 10^3 + 3 x 10^2 + ......

			* Binary: base 2
			* 100101 = 1x 2^5 + 1x2^2 + 1x2^0

			* Hexadecimal system: base 16
			* split binary to groups of 4 and represent them using hex system. 0x....
			* If we cant split into exact froups of 4, we use padding.
			*/

			/*
			* using number 15 in hexadecimal system, as well as binary system.

			int number = 0x0f;
			int number2 = 0b00001111;

			std::cout << number << std::endl;
			std::cout << number2 << std::endl;

			*/

		//--------------------------------------------------------------------
		//Integers

			/*
			
			* Integers store decimals and typically store 4 bytes of memory.
			* Variable is a named piece of memory used to store certain data
			* {} - Braced initialization, () - functional initialization, = - Assignment initialization
			*/

			/*

			//Here, the variable may store random garbage value
			int elephant_count;

			// This initializes to 0
			int el_count{};

			//Now, we can also use () to store data. However, for something like:
			int example{2.9};
			int example2(2.9);

			//{} will give an error that data type is not integer
			//() will convert the 2.9 to integer, leading to a loss of information

			//example of lossy conversion using functional assignment

			int example3(2.9);
			std::cout << example3 << std::endl;

			//checking size of variables using sizeof function
			std::cout << "sizeof int: " << sizeof(int) << std::endl;
			*/

		//--------------------------------------------------------------------
		//Integer modifiers

			/*
			* short makes integers be 2 bytes instead of 4
			* signed and unsigned are all 4 bytes.
			* long int is 4 bytes, long long is 8 bytes
			* These modifiers only work for integer types	
			*/
			/*
			signed int value1{ -300 };
			std::cout << value1 << std::endl;

			//getting compiler error
			//unsigned int value{ -300 };

			short int value2{ 55 };
			std::cout << "size:" << sizeof(value2) << std::endl;

			long long int value3{ 55 };
			std::cout << "size:" << sizeof(value3) << std::endl;
			*/
		//--------------------------------------------------------------------------------
		//FLoating point types/Fractionals

			/*
			* float is 4 bytes, precision: 7
			* double is 8 bytes, precision: 15
			* long double is 12 bytes, precision: high
			* floating points can divide with 0
			* 0.0/0.0 = NaN. Program will not crash
			* always use suffixes with floating numbers otherwise default is double
			* suffix long double with l
			*/

			/*
			// long double size depends on the compiler. 
			
			float number1{ 1.12345678901234567890f };
			double number2{ 1.1234567890123456789 };
			long double number3{ 1.1234567890123456789L};
			std::cout << "sizeof" << sizeof(number1) << std::endl;
			std::cout << "sizeof" << sizeof(number2) << std::endl;
			std::cout << "sizeof" << sizeof(number3) << std::endl;

			//testing out scientific notaion
			double number4 {1.924e8};
			double number5 {1.928e-11};
			
			//testing out precision
			std::cout << "testing out precision" << std::endl;
			std::cout << std::setprecision(20);
			std::cout << "number1: " << number1 << std::endl;
			std::cout << "number2: " << number2 << std::endl;
			std::cout << "number3: " << number3 << std::endl;
			
			//testing out infinity and NaN
			double number6 {};
			double number7 {};
			double result1{ 10.0 / number6 };
			double result2{ number6 / number7 };
			std::cout << "getting infinity:" << result1 << std::endl;
			std::cout << "getting NaN:" << result2 << std::endl;
			*/

			/*
			* it is also important to take special care of using suffices
			* you may instantiate a double with suffix f accidentally. This will not work properly
			* 
			*/
		//---------------------------------------------------------------------------------------------------
		//Booleans
			/*
			* storing true and false
			* booleans take 1 byte of memory
			* Wasteful since booleans covers only 2 states
			*/
			
			/*
			//Practicing Boolean

			bool redLight{ false };
			bool greenLight{ true };
			//bool greenLight {!redLight}

			if (greenLight) {
				std::cout << "GO!!!" << std::endl;
			}
			else {
				std::cout << "STOP!!!" << std::endl;
			}
			std::cout << "sizeof Boolean: " << sizeof(true) << std::endl;

			//When printing boolean, false is 0, true is 1
			std::cout << "redLight: " << redLight << std::endl;

			//to print false or true, we use the following boolalpha
			std::cout << std::boolalpha;
			std::cout << "redLight: " << redLight << std::endl;
			
			*/
		//-----------------------------------------------------------------------------
		//Characters
			/*
			* put in ''
			* occupies 1 byte in memory
			* Using ASCII, one of the possible 256 possible values is used to represent a certain character
			* We can also assign ASCII code to a char variable
			* ASCII doesn't work well on other languages than English
			*/

			/*
			//practicing characters:

			char character1{ 'a' };
			char character2{ 'b' };
			char character3{ 'c' };
			char character4{ 'd' };
			char character5{ 'e' };

			std::cout << character1 << std::endl;
			std::cout << "character size: " << sizeof(character1) << std::endl;

			//practicing ASCII representation of characters
			char value = 65;
			std::cout << "value: " << value << std::endl;

			//Use casting to display integer value of the represented characters
			std::cout << "value(int): " << static_cast<int>(value) << std::endl;
			*/
		//-------------------------------------------------------------------------------
		// auto 
			/*
			* Lets compiler deduce the type of the data
			*/

			/*
			//Practicing auto
			//visual studio can display the type if you hover over the assignment

			auto var1{ 10.0 };
			auto var2{ 10.5f };
			auto var3{ 10ll };

			std::cout << "size of var1: " << sizeof(var1) << std::endl;
			std::cout << "size of var2: " << sizeof(var2) << std::endl;
			std::cout << "size of var3: " << sizeof(var3) << std::endl;
			
			*/
		//--------------------------------------------------------------------------------
		//Assignments
			
			/*
			* we can assign values to variables even after they are initialized
			* we need to be careful with auto type deductions since we may change value to 
			  some value that is not supported
			*/
			
			int var{ 5 };
			std::cout << "var is " << var << std::endl;

			var = 10;
			std::cout << "var is " << var << std::endl;

			//Auto Type practice

			auto var2{ 5u };
			std::cout << "var2 is " << var2 << std::endl;
			var2 = -9;
			std::cout << "var2 is " << var2 << std::endl;
		return 0;

}