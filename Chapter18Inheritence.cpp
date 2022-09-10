#include<iostream>
#include"Player.h"
#include"Nurse.h"
#include"CivilEngineer.h"
int main() {
	//Inheritence
	//It allows us to build hierarchies of classes
	//Person->Engineer->CivilEngineer
	//We can have a parent class and then have other classes depend on person class
	//As such, we can reuse the same code instead of repeating it again and again
	//it is a defining feature of OOP
	//Sub classes can add own specializations onto parent class
	//Public inheritencederived classes can use public members of base class
	//However, they cannot make use of the private members of the base class
	//The same also applies friends of derived class. 
	//They can access private members of derived class but not of base class

	/*
	Player p1 = Player("Some", "Rando", "Basketball");
	
	p1.printInfo();

	p1.setFirstName("Hrithik")->setLastName("Tandon");

	p1.printInfo();
	*/

	//Player class does not have access to firstName and lastName variables of Person
	//As such, we have to make use of getters and setters to use them
	//-----------------------------------------------------------------------------------------------------------------------------------------
	//Protected members
	//To allow use of variables from base classes in derived classes, use protected keyword
	//Protected variables but public inheritence

	//-------------------------------------------------------------------------------------------------------------------------------------------------
	//Base class access specifiers
	//public keyword is base class access specifier.
	//Decides how accessible are members of a base class
	//public inheritence means anything public in base is public in derived, proteced in base is protected in derived and private is private as well

	//protected inheritence
	//public in base -> protected in derived
	//protected in base -> protected in derived
	//private in base -> private in derived

	//private inheritence means everything in base is private in derived
	//further classes that derive from the derived classes or use variables from derived class will find variables to be private, protected or public as such
	
	/*
	Nurse n1 = Nurse("MK Hospital");
	n1.printInfo();
	*/

	//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Private inheritence
	//Anything in base class is now private to derived class. as such, derived classes that use derived classes cannot acces the variables public in bsae class
	//If we have to use getters or setters for derived classes, it is a better design to just use protected or public.

	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Resurrecting members back in scope

	//How we can resurrect members back in scope
	//if a derived class does private inheritence, further derived class will be unable to access the base class members from the derived class
	//We can change the access of these members by using 'using' keyword
	//check Engineer and CivilEngineer class
	//While we can resurrect members through "using Baseclass::method/member variable, it is easier to just use protected or public inheritence
	//This can make things confusing
	//Cannot resurrect anything that is private to the upstream class/base class/Parent class
	
	//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Default Arg Constructors with Inheritence
	//For a derived class, first the default constructor is called for the base class then derived classes
	//Always provide a default constructor for your class

	
	//CivilEngineer c1;

	//As such, we need base/parent classes to have a default constructor
	//Otherwise, we may have some problems
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Custom Constructors with inheritence
	//For Person -> Engineer -> CivilEngineer
	//It calls Person() first, then Engin.. 
	//We can use Initializer list

	/*
	//Testing out custom constructors and methods
	Person p1("Harbhajan", "Tandon", 70);
	Engineer e1("Hrithik", "Tandon", 22, 0);
	CivilEngineer c2("Some", "Random Engineer", 25, 5, "Something");

	p1.printInfo();
	e1.printInfo();
	c2.printInfo();
	*/

	//Dont initialize member variables of base class in derived class constructors as some variables may be private to base class
	//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Copy constructors with inheritence
	//How copy constructors work with inheritence hierarchy
	//We use person, engineer and civilengineer for it.

	/*
	Engineer e1("Hrithik", "Tandon", 22, 0);
	Engineer e2(e1);  
	e2.printInfo();
	*/
	//default copy constructor
	//The default copy constructor copies data member-wise

	//We will be creating our own copy constructors
	//We should reuse copy constructors in base class for derived classes
	//private members would not be accessible
	//We should avoid copies wherever possible
	//We may need our own copy constructs if we are doing dynamic initialization
	//The copy constructor for engineer will strip off the engineer part when copying Person part and then use that
	// to initialize the copy part for the Engineer constructor

	//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Inheriting base constructors
	//using Person::Person in Engineer class;
	//This tells compiler to generate a constructor that initializes the base member variables
	//Copy constructors cannot be inherited
	//Inherited constructors are base constructors. No knowledge of derived class
	//Inherited constructors are confusing. 
	//The using keyword inherits all the constructors within base class in to derived class
	// As such, we can not only create engineer object using the 3 Person variables but also the 4 engineer constructor variables
	//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Inheritance with destructors
	//destructors are called in the reverse order of the constructor order
	
	//CivilEngineer c2{"H", "T", 1, 2, "Yo"};

	//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Reusing names in inheritence
	//We can have same name for methods or member variables in base class and derived class
	//C++ overrides the method in base class if the method is called on the child class
	//We can also for the compiler to call the method in the parent class instead

	/*
	//Using parent method instead of the child method
	CivilEngineer c2{"H", "T", 1, 2, "Yo"};
	c2.Engineer::printInfo();
	*/
	return 0;
}