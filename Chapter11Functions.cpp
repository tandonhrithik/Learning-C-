#include<iostream>
#include "Compare.h" //Preprocessor declaration

//variable declaration and definition

double weight{};

//cannot repeat definition
// it carries over to other files in the same project
// same rule for functions
 
//double weight{};

//void say_age(int age);

//void say_age(int* age);


void say_age(int& age);

//Function header or prototype

void enter_bar(int age);

int main() {
	//One definition rule
	//Definitions cannot pop up more than once in the program
	//Classes/structures are exempted from this rule as long as different files
	//However, these cannot show up in the same file/translation units
	//std::cout << weight << std::endl;

	//-----------------------------------------------------------------------------------------
	//function is a reusable piece of code that can be used to perform certain "functions"
	/*
	* returntype nameoffunction(param1, param2....){
		doThisStuff;
		return objectOfreturn-type
	}
	//function is identified by unique name and parameters.

	*/
	//declare functions before the main function
	/*
	int age{ 20 };
	int age2(17);

	//calling enter_bar
	enter_bar(age);
	enter_bar(age2);
	*/
	//------------------------------------------------------------------------------------
	//Sometimes its flexible and more readable to split function into header and else
	//As such we can split a function into declaration and definition
	//prototype must come before the function call or main function
	/*
	int age{ 20 };
	int age2(17);

	//calling enter_bar
	enter_bar(age);
	enter_bar(age2);
	*/

	//---------------------------------------------------------------------------------------------------
	//function across multiple files
	//Having multiple source files will lead to addition of included library during preprocessing
	//copies everything in library and replaces the #include<> with the data in the file
	//Linking joins the different object files into one file
	//Now we will split program into various files
	//Some of these files will matter at different stages of program: preprocessing, compiling, linking
	//Even during spliting files, One definition rule still applies
	//The linker searches for the used function in all of the translation units(.cpp files)


	int maximum = max(20, 50);
	std::cout << maximum << std::endl;

	//compare.h includes max declaration while compare.cpp includes the function definition
	//We have to include the header file that includes the declaration. Hence, Preprocessor directive #include<Compare.h>
	//The translation unit containing the definition does not have to have the same name as the header file containg declaration
	//if we don't define the function in another file, we will get a linker error
	//compiler will be happy with the declaration but the linker will not be able to function properly without definition
	//--------------------------------------------------------------------------------------------------------------------------------------
	//passing parameters to funcitons using value
	/*
	int age{ 70 };

	std::cout << age << std::endl;
	say_age(age);
	std::cout << age << std::endl;

	std::cout << &age << std::endl;
	*/
	//the parameter used within the body of the function is a copy of te argument that we pass
	//As such, the age within the main scope is different from age within function

	//-------------------------------------------------------------------------------------------------------------------------------------------------
	//passing by pointer
	// pass address for passing by pointer
	//allows us to avoid trouble of copies
	//As such, the function will not create a copy but actually modify the actual passed argument
	/*
	int age{ 25 };

	std::cout << age << std::endl;
	say_age(&age);//pass address for pointer
	std::cout << age << std::endl;
	*/

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------
	//passing by reference

	//passing by reference lets us change the argument without the hassle of dereferencing

	int age{ 23 };

	std::cout << age << std::endl;
	say_age(age); 
	std::cout << age << std::endl;

	std::cout << "age address in main scope: " << & age << std::endl;

	return 0;
}

void enter_bar(int age) {
		if (age >= 18) {
			std::cout << "Please proceed" << std::endl;
		}
		else {
			std::cout << "Please don't" << std::endl;
		}
		return;

}
/*
void say_age(int age) {
	++age;
	std::cout << "Hello, you are " << age << " years old!" << std::endl;
	std::cout << "Address of age: " << &age << std::endl;
}
*/
/*
void say_age(int* age) {
	++(*age); //important to always dereference a pointer
	std::cout << "Hello, you are " << *age << " years old!" << std::endl;
	std::cout << "Address of age: " << age << std::endl;
}
*/
void say_age(int& age) {
	++age;
	std::cout << "Hello, you are " << age << " years old!" << std::endl;
	std::cout << "Address of age: " << &age << std::endl;
}
