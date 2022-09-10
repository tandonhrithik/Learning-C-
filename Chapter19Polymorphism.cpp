#include<iostream>
#include<string>
#include "Shape.h"
#include"Circle.h"
#include"Oval.h"
#include"Ellipse.h"
#include"CivilEngineer.h"

void callDrawPtr(Shape* s) {
	s->draw();
}
int main() {
	//Polymorphism
	//It allows us to use base pointers to manage derived object
	//If we didnt use polymorphism, we'll need to have different methods for all derived classes
	//As such, polymorphism helps reduce repeating code
	//It also allows us to store objects of different types into the same array using base class pointers
	
	//Static binding
	//Compiler looks at type of pointer to decide which version of Draw() to call
	//if it sees baseClass*, it will call baseClass method instead of the derived class method
	//What we want to do is to have one method in the base class that calls the method within dervied classes when we want
	//instead of either only calling base method or having to use multiple methods within the derived classes
	//example, using shape.draw() should work for oval and circle as well instead of requiring multiple methods


	/*
	Shape s1("shape");
	//s1.draw();

	Oval o1(1, 2, "oval");
	//o1.draw();

	Circle c1(1, "Circle");
	//c1.draw();

	//Base pointers
	//Calls Shape.draw on all objects instead of circle.draw or oval.draw
	Shape* sptr = &s1;
	sptr->draw();

	sptr = &o1;
	sptr->draw();

	sptr = &c1;
	sptr->draw();

	//Base References
	//Same thing as pointers with static binding
	//Overwrites in the same memory address
	Shape& sref = s1;
	//sref.draw();

	sref = o1;
	//sref.draw();

	sref = c1;
	//sref.draw();
	
	*/
	//---------------------------------------------------------------------------------------------------------------------------------
	//Dynamic Binding using virtual functions
	//Mark the methods that we need dynamically resolved as virtual
	//With virtual functions, we can achieve dynamic binding using pointers as well as references
	/*
	Shape s1("shape");
	Oval o1(1, 5, "oval");
	Circle c1(5, "circle");
	Shape* sptr = &s1;
	callDrawPtr(sptr);
	sptr = &o1;
	callDrawPtr(sptr);
	sptr = &c1;
	callDrawPtr(sptr);

	Shape& sref = o1;
	sref.draw();
	Shape* arr[]{ &s1,&c1,&o1 };

	for (Shape* o : arr) {
		o->draw();
	}
	*/
	//Without the virtua; keyword before the draw() method, we get static binding instead
	//Without virtual method, we would have had to create a draw(Circle*) as well as draw(Oval*)
	// This is not a good practice as we would have loads of repeated codes when 10 or 100s of shapes are needed
	//------------------------------------------------------------------------------------------------------------------------------------
	//Size of polymorphic objects
	//polymorphic objects : objects that use dynamic binding
	//Dynamic binding is not free. eats up memory to make use of dynamic binding
	//The memory used will be much larger
	//slicing
	//BaseClassObject = derivedClassObject
	//Strips off the derived class properties that we do not need
	//As such, we are left with the BaseClassObject with the corresponding sliced properties


	/*
	std::cout << sizeof(Shape) << std::endl; //dynamic: 48, static: 40
	std::cout << sizeof(Oval) << std::endl; //dynamic: 64, static: 56
	std::cout << sizeof(Circle) << std::endl; //dynamic: 64, static: 56

	//slicing
	Circle c1(3, "circle");
	Shape s1 = c1;
	s1.draw(); //shape.draw(), slices off circle info leaving shape info

	//Compiler is smart enough to know that we only need the shape information from c1 for s1
	*/
	//------------------------------------------------------------------------------------------------------------------------------------------------
	//Polymorphic objects stored in collections

	/*
	Circle circle1(8, "circle1");
	Circle circle2(2, "circle3");
	Circle circle3(5, "circle2");

	Oval Oval1(1, 2, "oval1");
	Oval Oval2(3, 4, "oval2");
	Oval Oval3(6, 5, "oval3");

	//Using below slices the objects into objects of type shape
	//The array stores copies instead of using the original data


	Shape shapes[]{ circle1, circle2, circle3, Oval1, Oval2, Oval3 };
	for (Shape s : shapes) {
		s.draw();//makes use of shape draw instead of circle and oval
		//if we check size of our objects, the copies inside array will have size of shape instead of circle or oval
		//Thus, these are copies with sliced off information
	}

	//Trying array of shape pointers instead of copies
	//This one does not slice off
	//Polymorphism through base pointers helps in managing collection of derived objects
	Shape* shapes2[]{ &circle1, &circle2, &circle3, &Oval1, &Oval2, &Oval3 };
	for (Shape* s : shapes2) {
		s->draw();
	}


	//We cannot use an array of references. It is not allowed
	//References are not left assignable and as such, cannot be stored in collections
	*/
	//--------------------------------------------------------------------------------------------------------------------------------------------
	//Override
	//THis helps avoid easy to avoid mistakes within virtual methods
	//It hides what we have in base class for derived classes
	//add override keyword to avoid mistakes in using typos

	//-------------------------------------------------------------------------------------------------------------------------------------------------------
	//Overloading, overriding and hiding
	//If we overload a function in base class and override it in derived classes, then all other overloads in base class will be hidden

	/*
	Circle c{ 2,"circle" };

	//Below method does not work due to the override hiding the overload in the base class
	//c.draw(5); 
	//To use this, we have to override all overloads

	Shape* s = new Circle(10, "5");
	
	//s->draw("r");
	//Does not work because overload in derived classes is not visible to base classes
	*/

	//---------------------------------------------------------------------------------------------------------------------------------------------------
	//Inheritence and polymorphism at different levels.
	//Polymorphism does not always have to work at base class level
	//It can also work at derived class level for classes that further derive from them
	//For instance, if we have a base class animal and two classes, Felines and birds that derive from it
	//then if we have further classes that derive from felines or birds, then we can have polymorphism at different levels
	//We can have Animal* arr1[]{Feline, birds, cats, tigers, crows, pigeons, animal] and use the correct method for all of them due to dynamic binding
	//We can also have Feline* arr1[cats, tigers] where we can make use of method that are overriden in derived classes
	//Note, we may have a problem if we try to use a method that is introduced in a derived class but is not usable by the Base class
	//Especially important if we are using a collection of baseClass objects

	//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Inheritence and Polymorphism with static members
	//Static variable in base and derived class are same as it is inherited
	//This is undesirable as we may need to have a different value for them both
	//To overcome this problem, we can name a same-name static variable in the dervied class 

	/*
	Shape s1{ "1" }; //count:1
	Shape s2{ "2" }; //count:2
	Shape s3{ "3" }; //count:3

	//count at ellipse will be 4 if we do not create another static variable at Ellipse level
	Ellipse e1{ 1,2,"h" };//count:1

	Shape* s[]{ &s1,&s2,&s3,&e1 };

	for (Shape* k : s) {
		std::cout << k->getCount() << std::endl;
	}
	*/

	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Final allows us to restrict how we override methods in classes
	//Inheritence hierarchy of Animal.......Dog
	//final keyword means that no further derived classes will be able to override this method
	//std::string doThis() final{}
	//We can also restrict people from inheriting from a class altogether
	//Class Cat final: public feline
	//No class can now derive or inherit from Cat
	//Adding final to base class is dumb since it is never going to be inherited
	//There is no point in using virtual methods in final classes since they are never going to be inherited
	//Virtual keyword means we want it to be specialized while final method means we do not want it to be overridden
	//Trying to inherit from a final method or class will cause compile error
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Virtual functions with default arguments
	//Default arguments are handled at compile time
	//Virtual functions are called at runtime in polymorphism
	//For example, if we have a function in a derived method that has default parameters 
	//virtual int add(int a =5, b=20) override{return a+b}
	//Now here, if we use a baseclass pointer to access this method, the overriden method will be used but the arguments used will be static bound, 
	//that is, a and b will use their values from the base class

	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Virtual destructors
	//Destructor methods called using dynamic binding
	//~Animal() -> ~Feline() -> ~Dog()
	//Destructors are called in reverse order. ~Dog() - > ~ Feline() -> ~ Animal()
	//If we use a baseclassPointer, Animal* a = new Dog("-----")
	//delete animal will call animal destructor but not at feline and dog level leading to memory leak
	//add virtual to ~Feline(), ~dog()
	//This will cause the best case scenario delete function to be called for the dog object leading to deletion of dog in the correct order

	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Dynamic_cast<>()
	//A facility used to do downstream transformations for our polymorphic object
	//We want to transform from base class pointer to derived class pointer or reference
	//This allows us to call non-polymorphic methods wherever necessary
	//Use dynamic_cast<derivedClass*>(BasedClassPointer)

	/*
	CivilEngineer c1{ "Hrithik", "Tandon", 12, 5, "none" };
	Person* p = &c1;

	//Testing out casting
	Engineer* e{ dynamic_cast<Engineer*> (p) };
	p->printInfo();
	e->printInfo();
	*/

	//dynamic casting is useful whenever we need to use a non-polymorphic function, that is, one without virtual
	//overusing casting is a bad practice/design. 
	//If we have to use dynamic cast repeatedly, then it is a better practice to just make the function polymorphic instead.
	//Dynamic casting can fail. As such, use if(nullptr) in order to avoid crash at run time
	// We can also do dynamic casting for references instead of pointers by using & instead of *
	// Dynamic casting only works for polymorphic objects
	// Objects/class that are not polymorphic will not work with dynamic cast
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Don't call virtual Functions From constructors and destructors
	//BaseClass -> DerivedClass
	//DerivedClass overrides methods in BaseClass
	//Base* b = new Derived;
	//Base constructor called -> derived construc -> derived destructor - > base destructor
	//When we call a virtual function from base constructor, there won't be a derived constructor called to get the derived version of the function
	//As such, static binding results are obtained from base constructor
	//When a virtual function is called from destructor, derived destructor will activate first
	//When base destructor is used, the derived class object is already destroyed and as such, the version of function in base class will be called, instead of the derived method

	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Pure virtual functions and abstract classes
	//Pure virtual functions are used to mean that a method is not meant to be used with base class
	//As such, we do not have concrete implementation/definitions of these methods in the base class.
	//This tells the compiler that this method is not meant to be implemented within the base class
	//It also means that compiler stops us from creating objects of these base classes
	//Pure virtual functions
	//virtual double perimeter() const = 0;
	//virtual const = 0 tells compiler it is pure virtual function
	//As such, the base class becomes an abstract class and as such, we cannot create objects of type base class
	//We can still use a baseClass pointer to manage the objects even if it is an abstract class
	//If a class has atleast one pure virtual function, it becomes an abstract class
	//Derived classes must override all pure virtual functions from base class
	//We cannot call virtual functons from constructor of base class
	//Even if the class is abstract, we still need the constructor and it is used by the derived classes to create the base part of the object
	
	//Shape is an abstract class with virtual functions 
	//Shape c{};
	/*
	//using a class that overrides all methods of base class
	Ellipse d{ 5,6,"Ellipse"};
	d.draw();
	//Shape pointers can still be use
	Shape* s{ &d };
	*/

	//If a derived class does not override all pure virtual methods of the base class then the derived class also becomes an abstract class
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Abstract classes as interfaces
	//An interface is a Abstract class with only pure virtual functions and no member variables
	//It is a specification that will be fully implemented in derivedclasses
	//It can be used to give derived class features that will not have to be implemented in the derived class 

	
	return 0;
}