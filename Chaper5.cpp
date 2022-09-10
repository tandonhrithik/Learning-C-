//Hrithik Tandon's notes
#include<iostream>

int main() {
	//Flow control


	/*If statement
	* allows to perform function based on if its true or not.
	* we can also use expression as the condition as long as it evaluates to a boolean
	* we can also nest conditions
	*/

	/*
	//Testing if and else
	int number1{ 55 };
	int number2{ 65 };

	bool result = (number1 < number2);
	if (result == true) {
		std::cout << number1 << " is less than " << number2 << std::endl;
	}
	else {
		std::cout << number1 << " is NOT less than " << number2 << std::endl;
	}
	*/

	//---------------------------------------------------------------------------------------------------

	/*ELSE IF
	* Allows to check for several conditions
	*/
	//Use else if when we want the application to perform certain action based on user selection

	//------------------------------------------------------------------------------------------------------
	//Switch statement.

	/*
	* Alternative to Else if but much more compact
	* switch (variable){
		case value: {
			do this;
			break;
		}
		case value2: {
			do this;
			break;
		}
		default: {
			do this;
		}

	}
	* Break tells the program to end whenever the case matches instead of going through every case below. 
	* 
	* we can also group several cases in one block
	* We can only use int, long, enums etc within switch statements
	*/
	/*
	//practicing switch
	int tool(20);
	switch (tool) 
	{
		case 10: {
			std::cout << "Case 10 matched" << std::endl;
		}
			   break;
		case 20: {
			std::cout << "Case 20 matched" << std::endl;
		}
			   break;

		case 30: {
			std::cout << "Case 30 matched" << std::endl;
		}
			   break;
		default: {
			std::cout << "No case found" << std::endl;
		}
			   break;

	}
	*/
	//---------------------------------------------------------------------------
	//Ternary Operator
	/*
	* result = (condition) ? option1 : option2;
	* shorthand for if and else.
	* auto lets it convert to float below
	*/
	/*
	//Practicing ternary operator
	int a{ 22 };
	int b{ 200 };
	auto max = (a > b) ? a : 22.5f;
	std::cout << "Maximum between " << a << " and " << b << " is " << max << std::endl;
	*/

	return 0;
}