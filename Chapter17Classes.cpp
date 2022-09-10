#include<iostream>
#include "Constants.h"
#include"Cylinder.h"
#include"Dog.h"

class Cat {
	std::string cname;
};

struct Cow {
	std::string coname;
};

int main() {
	//Classes let us use our own types 
	//We can use classes as blueprints to create objects using that blueprint
	//For example, we use a class of person and then add properties to them
	/*
		Class NameofClass{
		public:
			properties

		public:
			functions:
		}
	*/
	//Members of a class are private by default
	//As such, we have to declare members and functions by using public keyword
	//member variables cannot be references as references need to be initialized
	//Class methods can access member variables irregardless of the scope


	Cylinder cylinder1;//objects
	std::cout << cylinder1.volume() << std::endl;

	//changing cylinder1 member variables if public
	//cylinder1.baseradius = 2;
	//cylinder1.height = 2;


	//-----------------------------------------------------------------------------------------------
	//Class constructors
	//Used to create an instance of a class
	//no return type, same name as the class, can have parameters, used to initialize objects

	/*
	//Using constructor with parameters
	Cylinder cylinder2(10, 10);
	std::cout << cylinder2.volume() << std::endl;

	//Using empty constructor
	Cylinder cylinder3;
	std::cout << cylinder3.volume() << std::endl;
	*/

	//For classes without a constructor, compiler creates its own empty constructor
	//In this instance, Cylinder(){};
	//--------------------------------------------------------------------------------------------------------

	//Default Constructors
	//This syntax lets compiler generate default constructor for us.
	//use Cylinder() = default;
	//If we make our own constructor, compiler does not generate its own default own
	//As such, we can make use of default
	//Constructors need to be public

	/*
	Cylinder cylinder4;
	std::cout << cylinder4.volume() << std::endl;
	*/

	//------------------------------------------------------------------------------------------------------------------
	//Using setters and getters
	//Methods used to read or modify member variables

	/*
	Cylinder c1;
	//displaying default cylinder using getters
	std::cout << "height: " << c1.getheight() << ", radius: " << c1.getradius() << ", Volume:" << c1.volume() << std::endl;

	//Using setters
	c1.setheight(2);
	c1.setradius(5);

	//testing out the setters using getters
	std::cout << "height: " << c1.getheight() << ", radius: " << c1.getradius() << ", Volume:" << c1.volume() << std::endl;
	*/

	//-------------------------------------------------------------------------------------------------------------------------------
	//Classes across multiple files
	//Move constants to some other header such as PI
	//split class into cpp and header. header file will act as preview of what the class offers
	//Keep the declarations in header and definition in cpp file
	//We should not have redefinition for the same functions

	//----------------------------------------------------------------------------------------------------------------------------------------
	//Maintaining classes using pointers
	//We can use pointers to instantiate objects of a class on the heap memory
	//We can also use it to point to object on stack memory
	//Cylinder* c2 = &cylinder1;
	Cylinder* c2 = new Cylinder(10, 10);

	//A pointer only stores address and so, we have to dereference it to get useful information
	std::cout << "volume c2: " << (*c2).volume() << std::endl;

	//We can use -> in order to avoid the ugly looking dereferencing
	//-> pointer access operator lets the compiler know to dereference c2 internally and use volume() function
	std::cout << "volume c2: " << c2->volume() << std::endl;
	std::cout << "volume c2: " << c2->getradius() << std::endl;


	//releasing the memory back onto heap
	delete c2;
	c2 = nullptr;


	//----------------------------------------------------------------------------------------------------------------------------------
	//Destructors
	//Destructors are methods or functions called when objects die to clear up memory
	//Destructors are called when local stack object goes out of scope
	//destructors are also used when an object is called by value as local copy needs to be destroyed
	//When a local object is return from a function

	//The destructor call is for the int* in Dog class as it goes out of scope
	/*
	Dog d1 = Dog("Snoop", "Pome", 2);
	Dog* d2 = new Dog("T", "German", 5);
	//Note, without delete being called, destructor was not called for T leading to memory leak.
	delete d2;
	*/

	//--------------------------------------------------------------------------------------------------------------------------------------------
	//Constructor and destructor call order
	//Destructors are called in the reverse order of constructor call

	/*
	Dog d1 = Dog("Snoop1", "Pome", 2);
	Dog d2 = Dog("Snoop2", "Pome", 2);
	Dog d3 = Dog("Snoop3", "Pome", 2);
	Dog d4 = Dog("Snoop4", "Pome", 2);
	*/
	//The object that was created the last is deleted first
	//This is because the object created first may have more dependencies
	//-------------------------------------------------------------------------------------------------------------------------------------------------------
	//The 'this' pointer
	//'this' pointer is used to manipulate the current object
	//We can also use this if the member variables are same name as method parameters

	/*
	Dog d1 = Dog("Snoop1", "Pome", 2);
	Dog d2 = Dog("Snoop2", "Pome", 2);

	d1.printinfo();
	d2.printinfo();

	//Return "this", we can chain setters
	d1.set_age(3)->set_breed("Bluey")->set_name("B");
	d1.printinfo();

	//We can also modify the methods to use references in order to chain the setters
	//instead of using Dog* as returntype, use Dog&

	*/
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Struct 
	// 
	// 
	//Struct is also another keyword that can be used to create classes
	//For classes, members/variables are private by default
	//For struct, members/variables are public by default
	//We can change this by using explicit public or private keywords
	//we cannot access cat.name

	Cow c;
	c.coname;

	//struct is useful only if we want to use a class that only has member variables and no methods/functions
	
	//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Size of Class objects
	//C++ only accounts for size of member variables of a class
	//Functions are not accounted for as functions are affiiated with the class and not class objects
	//Functions act more as blueprints
	//Boundary alignments mean that object of a size are stored at addresses of multiples of that size
	//4 at multiples of 4, 8 at 8 etc
	/*
	Dog d1;
	std::cout << "sizeof(Dog) " << sizeof(d1) << std::endl;

	std::cout << "sizeof(Cow) " << sizeof(c.coname) << std::endl;

	std::cout << "sizeof(Cow) " << sizeof(c) << std::endl;
	*/
	std::string name{ "Hello World!" };
	std::cout << "sizeof(name) " << sizeof(name) << std::endl;
	//size of pointer but not the text the string pointer points to
	return 0; 
}