#include<iostream>
#include<stdio.h>
#include <cctype>
#include <cstring>
#include<string>
#include<iomanip>
int main() {
	//c-strings are facilities used to work with strings and text data 
	//They are not convenient or safe .

	/*
	* we can use facilities to see if a character
	* is alphanumeric
	* is lowercase and more
	* need to include <cctype> library
	*/

	/*
	//checking if characters are alphanumeric or not. If not, outputs 0
	std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
	std::cout << "* is alphanumeric: " << std::isalnum('*') << std::endl;

	//use isalpha to check if its alphabetic
	//std::isalpha('C')

	//program to check for blank character
	char arr[]{ "Hello, I hope you're doing great!" };
	size_t blank_count{};
	for (char c : arr) {
		if (std::isblank(c)) {
			blank_count++;
		}
	}
	std::cout << "message: " << arr << std::endl;
	std::cout << "number of blanks: " << blank_count << std::endl;

	//use islower(parameter) to see if its lowercase
	//use isupper(parameter) to see if its uppercase
	//use isdigit(parameter) to see if its a digit
	//use toupper(parameter) or tolower(parameter) to convert to upper or lowercase respectively
	*/
	//----------------------------------------------------------------------------------------------------------------------
	//using cstring library
	/*
	* use strlen to get length of the string
	* strlen does not count null character
	* sizeof does count the null character
	* strlen also works with decayed arrays. decayed arrays are the one made using pointer
	* strcmp can be used to compare strings/
	* strcmp (const char *lhs, const char *rhs)
	* returns positive value if rhs appears before lhs in lexographical order. negative if otherwise. equal if same
	* strncmp(lhs, rhs, std::size_t count), count is used to decide how many characters to compare
	* strchr can be used to find/search the first occurence of a character in a string
	* we can use strrchr to find the last occurrence of a character in the string
	*/
	/*
	const char message1[]{ "Hello, My name is Hrithik Tandon" };
	std::cout << std::strlen(message1) << std::endl;
	std::cout << sizeof(message1) << std::endl;

	const char* message2{ new char[] {"Hello, My name is Hrithik Tandon"} };
	std::cout << std::strlen(message2) << std::endl;
	std::cout << sizeof(message2) << std::endl; //this is 8 becuase its size of pointer, not the array its pointing to
	delete message2;
	message2 = nullptr;

	const char* string_data1{ "Alabama" };
	const char* string_data2{ "Alabana" };

	std::cout << std::strcmp(string_data1, string_data2) << std::endl;

	//specify how many characters to compare. 
	std::cout << std::strncmp(string_data1, string_data2, 5) <<std::endl;
	*/
	/*
	const char* const str{ "Shoot the mirror on the wall" };
	char target = 'r';
	const char* result = str;
	size_t iterations{};

	while ((result = std::strchr(result, target)) != nullptr) {
		std::cout << "Found '" << target << "' starting at '" << result << "'\n";
		++result;
		++iterations;
	}
	
	//strchr returns nullptr only if the given string does not have the target character in it

	std::cout << "iterations : " << iterations << std::endl;
	*/
	//arrays are constant. Cannot point to something else later. pointerarrays/ decayed arrays are not
	//strrchr gives the last occurrence of the character we are searching for

	//------------------------------------------------------------------------------------------------------------------------------
	// Copying and Concatenation 
	//strcat lets us join strings
	//strcat is unsafe to use because nothing is stopping us from concatenating beyond array's assigned memory
	/*
	char dest[50]{"Hello"};
	char src[50]{"World!"};

	//std::strcat(dest, src);
	//strncat(dest,src, n) where n is how many characters we want to concatenate
	//std::strncat(dest, src, 5);
	// 
	//strcpy copies from source to destination
	//strncpy(dest, cpy, n) where n is how many we want to copy. overwrites the first n chars

	//std::strcpy(dest, src);
	//std::strcpy(dest, src, 5);


	//This is why C-strings are unsafe and unreliable
	std::cout << dest << std::endl;
	*/

	//--------------------------------------------------------------------------------------------------------------
	//std::string makes working with strings easy in c++
	// char arrays have problems as we have to keep size in check and more
	// we also had to remember to keep the null character in mind/check
	// std::string lets us do all c-string functions without worrying about the above
	// declaring and using std::string
	//#include<string>
	
	std::string name{ "Hrithik" };
	std::string name2{ "Hrithik", 4 }; //initialize using 4 chars
	std::string name3{ name, 2,4 };//initialize from 2nd character using 4 next characters
	
	std::cout << name << "\n" << name2 << "\n" << name3 << "\n" <<(name2+name3) << std::endl;

	//We can make these strings larger than we initially declared them to be
	// name = name2+name3;
	// using a char* that points to an array and changing the array only changes the array that the pointer points to
	// the older array is wasted memory
	//printf("Hello, I hope you're doing great!\n");
	return 0;
}