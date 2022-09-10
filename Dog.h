#include<string>
class Dog {
public:
	Dog();
	Dog(std::string name, std::string breed, int age);
	~Dog();
	Dog* set_name(const std::string& dname);
	Dog* set_breed(const std::string& breed);
	Dog* set_age(int age);
	void printinfo();
private:
	std::string dname;
	std::string dbreed;
	int * dage{nullptr};
};
