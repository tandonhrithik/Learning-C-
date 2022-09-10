#include<iostream>
#include<string>
int maxi(int a, int b);

double maxi(double a, double b);

double maxi(int a, double b);

double maxi(double a, int b);

double maxi(double a, int b, int c); // still a valid overload

std::string maxi(std::string str1, std::string str2);
int main() {
	//Function overloading
	//It allows us to have multiple copies of same function but with different parameters
	//As such, we can have different overloads of a function
	//As such, compiler can use the best overload based on the arguments passed

	//To overload, change order of parameters, number of parameters or type of parameters
	//You cannot overload using different return type alone.

	auto result = maxi(1, 2);

	auto result2 = maxi(1.2, 2.5);

	auto result3 = maxi("dog", "cat");

	std::cout << result3 << std::endl;

	return 0;
}

int maxi( int a, int b){ 
	std::cout << "int overload called" << std::endl;
	if (a > b) {
		return a;
	}
	else return b;
}

double maxi(double a, double b) {

	std::cout << "double overload called" << std::endl;

	if (a > b) {
		return a;
	}
	else return b;
}

double maxi(int a, double b) {

	std::cout << "double overload called" << std::endl;

	if (a > b) {
		return a;
	}
	else return b;
}

double maxi(double a, int b) {

	std::cout << "double overload called" << std::endl;

	if (a > b) {
		return a;
	}
	else return b;
}
std::string maxi(std::string a, std::string b) {
	if (a > b) {
		return a;
	}
	else return b;
}