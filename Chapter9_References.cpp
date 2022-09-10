#include<iostream>

// Chapter 9 : References
int main() {
	//references can be used to create aliases for a variable
	//They can be used to modify the value of the other variable
	//Declaring and using references:

	/*
	int val{ 45 };

	//declaring and initializing the reference

	int& ref_val{ val };

	//printing the address of original variable and reference gives same address

	std::cout << "reference address: " << &ref_val << std::endl;
	std::cout << "value address    : " << &val << std::endl;

	//changes to the value of reference modifies the original and vice-versa

	std::cout << "sizeOf(int&): " << sizeof(int&) << std::endl;
	std::cout << "sizeOf(double&): " << sizeof(double&) << std::endl;
	*/

	//--------------------------------------------------------------------------------------------------
	//pointers and references

	/*
	* pointers stores address of variables and can be used to modify variables
	* references do not need to deference to access the variable value but pointers do.
	* references cannot be changed to refer to some other variables later. Pointers can.
	* references must be initialized at declaration. Pointers do not have such restriction
	* if we try to refer to a new variable later on, the reference would instead change the value of 
	the original variable to the new one, rather than referencing new variable
	*/

	//-----------------------------------------------------------------------------------------------------------
	//References and const
	/*
	* make the reference const so that we cant modify the original value
	* 
	*/

	/*
	int age = 5;
	const int& refAge = age;
	int& refAge2 = age;

	const int* const p_age{ &age };

	//*p_age = 35;
	//gives error
	//refAge2 = 35;
	//does not give any error
	//refAge = 35;
	//gives error

	//testing same thing with pointer
	const int* const p_age{ &age };

	//*p_age = 35;
	//gives error
	
	//* even if the reference is const, if the original value is not const, we can modify age
	*/
	return 0;
}