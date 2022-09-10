//Hrithik Tandon's Notes
#include<iostream>
#include<iomanip>
#include<ios>
#include<limits>
#include<cmath>
int main() {
	//----------------------------------------------------------------------------------------------
	//Basic Operations
	
	/*
	//Practicing Operations
	int number1 = 5;
	int number2 = 3;

	std::cout << "numbers are: " << number1 << " and " << number2 << std::endl;
	//Testing addition
	int sum{ number1 + number2 };
	std::cout << "sum: " << sum << std::endl;

	//Testing subtraction
	int difference{ number1 - number2 };
	std::cout << "difference: " << difference << std::endl;

	//Testing multiplication
	int product{ number1 * number2 };
	std::cout << "product: " << product << std::endl;

	//Testing division
	int quotient{ number1 / number2 };
	std::cout << "quotient: " << quotient << std::endl;

	//Testing modulus
	int remainder{ number1 % number2 };
	std::cout << "remainder: " << remainder << std::endl;
	*/

	//-----------------------------------------------------------------------------------------------
	//Precedence and associativity

	/*
	* precedence defines which operation should be performed first
	* associativity defines whether to perform the direction from the left or the right
	* parenthesis can be used to give precedence to certain operations
	* It can be important to use () so that the reader does not have to check the precedence table repeatedly
	*/

	/*
	//Practicing Precedence and associativity
	int a{ 5 };
	int b{ 4 };
	int c{ 6 };
	int d{ 8 };
	int e{ 2 };
	int f{ 3 };
	int g{ 7 };

	//testing out a group of operations.
	int result = a + b * c - d / e - f + g;
	std::cout << "Answer is: " << result << std::endl;

	//Using () to give precedence to a+b
	result = (a + b) * c - d / e - f + g;
	std::cout << "Answer is: " << result << std::endl;

	*/
	//------------------------------------------------------------------------------------------------
	//Prefix and Postfix addition and subtraction

	/*
	* increment number++ and decrement number--
	* postfix increment means when execution hits, as soon as the statement is done, increment the value
	* same for postfix decrement
	* Prefix ++value does increment before execution of the statement
	* same for prefix decrement
	*/

	/*
	// Testing Postfix and Prefix operations
	int number1(5);
	int number2(4);

	std::cout << "POSTFIX OPERATIONS" << std::endl;
	//Postfix Increment
	std::cout << "Value(Postfix): " << number1++ << std::endl;
	std::cout << "Value: " << number1 << std::endl;


	std::cout << "PREFIX OPERATION" << std::endl;
	//Prefix Increment
	std::cout << "Value(Prefix)" << ++number2 << std::endl;
	*/

	//--------------------------------------------------------------------------------------
	//Compound Assignment Operation

	/*
	* +=, -=, *=, /=, %=, etc.
	* example, value += 5 means value = value + 5
	*/

	/*
	//Testing compount operators

	int value{ 45 };
	std::cout << "The value is :" << value << std::endl;

	//Testing compount addition
	value += 5;
	std::cout << "The value+= is " << value << std::endl;

	//Testing compount subtraction
	value -= 5;
	std::cout << "The value-= is " << value << std::endl;
	*/
	//----------------------------------------------------------------------------------------
	//Relational Operators
	
	/*
	* <, >, ==, <=, >=, !=
	* it is important to use () around the variables being compared
	*/

	/*
	//Practicing Relational Operators

	int number1{ 45 };
	int number2{ 60 };

	std::cout << "number1: " << number1 << " and number2: " << number2 << std::endl;
	
	std::cout << std::boolalpha;
	std::cout << "number1 < number2 :" << (number1 < number2) << std::endl;
	//Using it without parenthesis doesnt work. this is because the bitwise operator has precedence over < operator.
	//std::cout << "number1 < number2 :" << number1 < number2 << std::endl;
	std::cout << "number1 > number2 :" << (number1 > number2) << std::endl;
	std::cout << "number1 == number2 :" << (number1 == number2) << std::endl;
	std::cout << "number1 <= number2 :" << (number1 <= number2) << std::endl;
	std::cout << "number1 >= number2 :" << (number1 >= number2) << std::endl;
	std::cout << "number1 != number2 :" << (number1 != number2) << std::endl;
	*/
	//--------------------------------------------------------------------------------------------------------
	//Logical Operators
	/*
	* And &&, Or ||, Not !
	* && - successful if both true
	* || - successful if either operand is true
	* ! - if true then false. If false, then true. That is, opposite of the operand
	* They work on boolean operands
	* Again, super important to use parenthesis to wrap the operation
	* We can also combine logical and relational operators.
	*/
	
	/*
	//Practicing Logical Operators
	bool a{ true };
	bool b{ false };
	bool c{ true };

	std::cout << std::boolalpha;
	std::cout << "Testing AND Operator" << std::endl;
	std::cout << "a && b: " << (a && b) << std::endl;
	std::cout << "a && c: " << (a && c) << std::endl;
	std::cout << "b && c: " << (b && c) << std::endl << std::endl;
	
	std::cout << "Testing OR Operator" << std::endl;
	std::cout << "a || b: " << (a || b) << std::endl;
	std::cout << "a || c: " << (a || c) << std::endl;
	std::cout << "b || c: " << (b || c) << std::endl << std::endl;

	std::cout << "Testing NOT Operator" << std::endl;
	std::cout << "!a " << (!a) << std::endl;
	std::cout << "!b " << (!b) << std::endl;
	std::cout << "!c " << (!c) << std::endl;
	*/
	//--------------------------------------------------------------------------------------------------------
	//Output formatting

	/*
	* Formatting output in Terminal to be more readable using <ios> and <iomanip>
	* std::endl using to add a new line character. We can also use \n
	* std::flush send everything in the output buffer to the terminal.
	* output buffer: where data goes before it is sent to the terminal.
	* std::flush is used to send data to terminal in one-go 
	* std::setw (setwidth)
	* std::right : right justification.
	* std::internal : internal justification : example if we are using a negative number, negative sign will be left justified while number is right
	* std::setfill('') fill character in the empty spaces
	* std::boolalpha : to show boolean as true and false
	* std::noboolalpha: to show them as 0 and 1 again
	* std::showpos: shows + before a positive number
	* std::noshowpos : cancel showpos
	* std::dec, std::hex, std::oct, show number in certain bases. has no effect on floating number
	* std::showbase : to show base for the output
	* std::uppercase: show data in uppercase.
	* std::scientific: shows numbers in a scientific format.
	* std::fixed: forces number to be in a fixed format.
	* std::cout.unsetf(std::ios::scientific| std::ios::fixed) - set the format to the default.
	* std::setprecision: used to set the precision of the number. This will be limied to the type of the variable.
	* std::showpoint: forces for the decimal point to be shown. forces for trailing zeroes to be shown.
	*/

	/*
	//Practicing Output formating
	//testing std::endl and \n
	std::cout << "Hello";
	std::cout << "World";
	std::cout << std::endl;
	std::cout << "------------" << std::endl;

	std::cout << "Hello\n";
	std::cout << "World\n";

	//NOTE: \n and endl work very differently under the hood even if they perform the same function

	std::cout << "THIS IS A MESSAGE" << std::endl << std::flush;
	//using std::flush, data is directly sent to the terminal
	//setw(10) means that its going to take atleast 10 characters even if we dont have 10 characters
	int num(20);
	std::cout << std::setw(10) << "Last Name" << std::setw(num) << "First Name" << std::endl;
	std::cout << std::setw(10) << "Cole" << std::setw(num) << "Jermaine" << std::endl;
	std::cout << std::setw(10) << "random" << std::setw(num) << "someone" << std::endl;
	std::cout << std::setw(10) << "work" << std::setw(num) << "nice" << std::endl;
	std::cout << "\n";
	//Testing justification
	//justified to the right by default
	std::cout << std::left;
	std::cout << std::setw(10) << "Last Name" << std::setw(num) << "First Name" << std::endl;
	std::cout << std::setw(10) << "Cole" << std::setw(num) << "Jermaine" << std::endl;
	std::cout << std::setw(10) << "random" << std::setw(num) << "someone" << std::endl;
	std::cout << std::setw(10) << "work" << std::setw(num) << "nice" << std::endl;

	std::cout << "\n";

	//testing internal justified
	std::cout << std::right;
	std::cout << std::setw(num)<< (-123.456) << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << std::internal;
	std::cout << std::setw(num) << (-123.456) << std::endl;

	std::cout << "\n";

	//testing setfill
	std::cout << std::setfill('*');
	std::cout << std::setw(10) << "Last Name" << std::setw(num) << "First Name" << std::endl;
	std::cout << std::setw(10) << "Cole" << std::setw(num) << "Jermaine" << std::endl;
	std::cout << std::setw(10) << "random" << std::setw(num) << "someone" << std::endl;
	std::cout << std::setw(10) << "work" << std::setw(num) << "nice" << std::endl;

	std::cout << std::endl;

	//testing boolalpha and noboolalpha
	bool test1(true);

	std::cout << std::boolalpha;
	std::cout << "Here's with boolalpha: " << test1 << std::endl;
	std::cout << std::endl << std::noboolalpha;
	std::cout << "Here's with noboolalpha: " << test1 << std::endl;

	//testing showpos and noshowpos

	int posNum{ 12 };

	std::cout << "default: " << posNum << std::endl;
	std::cout << std::showpos;
	std::cout << "With showpos: " << posNum << std::endl;
	std::cout << std::noshowpos;
	std::cout << "With noshowpos: " << posNum << std::endl << std::endl;

	int test2(55);
	std::cout << "test2 default: " << test2 << std::endl; 
	std::cout << std::hex << "test2 hex: " << test2 << std::endl;
	std::cout << std::dec << std::endl;// resetting to default decimal system
	
	std::cout << "testing showpoint" << std::endl;

	//forcing decimal point
	float test3(55);
	std::cout << "default: " << test3 << std::endl;
	std::cout << std::showpoint << "with showpoint: " << test3 << std::endl;
	*/
	//The documentation for these manipulators is of utmost importance. 

	//---------------------------------------------------------------------------------------------------------
	//numeric limits
	/*
	* std::numeric_limits<T>::min()
	* min represents smallest positive number can be represented with that datatype
	* lowest means the lowest and the maximum means the largest.
	* for signed, minimum can be negative.
	* requires #include<limits>
	*/
	/*
	//Testing out numeric limits
	std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short> ::max() << std::endl;
	std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short> ::max() << std::endl;
	std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int> ::max() << std::endl;
	std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int> ::max() << std::endl;
	std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long> ::max() << std::endl;
	std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float> ::max() << std::endl;
	std::cout << "The range(with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float> ::max() << std::endl;
	std::cout << "The range(with lowest) for double is from " << std::numeric_limits<double>::lowest() << " to " << std::numeric_limits<long double> ::max() << std::endl;
	std::cout << "The range(with lowest) for long double is from " << std::numeric_limits<long double>::lowest() << " to " << std::numeric_limits<long double> ::max() << std::endl;

	//we can also use other functions such as is_signed to see if the number is signed or digits to see it in digits
	std::cout << std::boolalpha;
	std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << std::endl;
	std::cout << "int in digits: " << std::numeric_limits<int>::digits << std::endl;
	*/

	//------------------------------------------------------------------------------------------------------------------------------
	//math
	//requires cmath library
	/*
	* use std::floor(parameter) to round to floor
	* std::ceil(parameter) to round to the ceiling
	* std::abs(para) number without the sign
	* std::exp(x). use to get e^x
	* std::pow(p1,p2). use to get p1^p2
	* std::log(parameter): to which power should be elevate e to get parameter. works in base 3 by default
	* std::log10(parameter):base 10. To which power should we raise 10 to get parameter
	* std::sqrt(para): get the square root of the number
	* std::round(para). rounds the number to the nearest integer. for instance, round(2.4) = 2, round(2.5) = 3
	* we also have several trignometric functions
	*/

	//--------------------------------------------------------------------------------------------------------------------------------------
	//Weird integral types
	/*
	* integral types smaller than 4 bytes do not support arithmetic operations
	* for instance short int and char.
	* This is because of processor design. 
	* If we try to perform arithmetic operations on smaller than 4 bytes, it is converted to int in order to perform that operation
	* bitwise shift operator display the same behaviour
	*/

	/*	
	//practicing these operations
	short int var1{ 20 };
	short int var2{ 10 };

	std::cout << "size of var1: " << sizeof(var1) << std::endl;
	std::cout << "size of var2: " << sizeof(var2) << std::endl;

	std::cout << "size of var1 + var2: " << sizeof(var1 + var2) << std::endl;
	*/

	return 0;

}