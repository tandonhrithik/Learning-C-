#include<iostream>
#include<string>
void max_str(std::string str1, std::string str2, std::string& output);
void max_int(int i1, int i2, int& i3);
void max_double(double d1, double d2, double* d3);
std::string add_str(std::string str1, std::string str2);
int sum(int a, int b);
int main() {
	//Focus on how to get things out of functions using c++ facilities
	//We can use function parameters to output data
	//Output parameters should be used in a way that allows us to modify the
	//the arguments from inside the functions using facilities such as referencing and pointers
	//Input parameters should not be modifiable from within the function. Hence const.

	/*
	std::string str1{ "Hello" };
	std::string str2{ "Goodbye" };
	std::string output{" "};

	std::cout << output << std::endl;

	max_str(str1, str2, output);

	std::cout << output << std::endl;
	
	int answer{0};

	std::cout << "\n" << answer << std::endl;

	max_int(20, 30, answer);

	std::cout << answer << std::endl;

	double ans{ 12 };

	std::cout << "\n" << ans << std::endl;

	max_double(20, 30, &ans);

	std::cout << ans << std::endl;
	*/

	//---------------------------------------------------------------------------------------------
	//getting output using return
	//returning 
	//sometimes to avoid unnecessary copies, compiler may use the same address to optimise everything
	//As such, we should not always rely on returning by copies
	int a{ 1 };
	int b{ 2 };
	int s = sum(a, b);

	std::cout << s << std::endl;
	std::cout << "main scope result address: " << &s << std::endl;

	std::string str1{ "Hello" };
	std::string str2{ " World!" };
	std::string str3= add_str(str1, str2) ;

	std::cout << "\n" << str3 << std::endl;
	std::cout << "Main scope string address: " << &str3 << std::endl;
	return 0;
}

void max_str(std::string str1, std::string str2, std::string& output) {
	if (str1 > str2) {
		output = str1;
	}
	else output = str2;
	return;
}
void max_int(int i1, int i2, int& i3) {
	if (i1 > i2) {
		i3 = i1;
	}
	else i3 = i2;
	return;
}

void max_double(double d1, double d2, double* d3) {
	if (d1 > d2) {
		*d3 = d1;
	}
	else *d3 = d2;
	return;
}

int sum(int a, int b) {
	int result = a + b;
	std::cout << "function scope result address: " << &result << std::endl;
	return result;
}

std::string add_str(std::string str1, std::string str2) {
	std::string s = str1 + str2;
	std::cout << "\nfunction scope s address: " << &s << std::endl;
	return s;

}

