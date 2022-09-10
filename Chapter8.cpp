#include<iostream>

int main() {
	//Pointers
	/*
	* variables are stored in certain addresses in memory
	* We can store that address within a pointer.
	* As such, pointer variables can be used in order to store addresses of other variables
	* We can even create pointers for custom types of objects
	* Dereferencing refers to reading a value through its address pointer
	*
	*/
	/*
	int* p_number{};
	double* p_fractionalNumber{};

	int* pnumber1{ nullptr };
	double* pdouble1{ nullptr };

	//All pointers have the same size
	std::cout << sizeof(pnumber1) << std::endl;
	std::cout << sizeof(pdouble1) << std::endl;

	//initializing pointers
	int number{ 43 };
	p_number=&number;

	std::cout << "number is : " << number << std::endl;
	std::cout << "address in memory: " << p_number << std::endl;

	//pointer and data type have to be of the same data type
	// int* pnumber1{}, number2;
	// in the example above, pnumber1 will be a pointer, number2 will be of int type, not a pointer
	//Dereferencing:
	int* pn{ nullptr };
	int num{ 56 };
	pn = &num;
	std::cout << "Address: " << pn << " , value: " << *pn << std::endl;
	*/

	//----------------------------------------------------------------------------------------------------------
	//pointers to character types
	/*
	* we can initialize character pointer to string literal
	* when we do this, the string will be expanded into a char array and the first char will be pointed to by the char pointer
	* String will be changed to a const char array. As such, we should not try to modify its characters
	* to change the string, initialize it as a char array instead of the pointer
	*
	*
	*/
	/*
	char* cPoint{nullptr};
	char var{ 'A' };
	cPoint = &var;

	const char* pMessage{"Hello World!"};
	std::cout << " message: " << pMessage << std::endl;
	std::cout << " *message: " << *pMessage << std::endl;

	//Allow users to modify string

	char message1[]{ "Hello World!" };
	message1[0] = 'B';
	std::cout << "message1: " << message1 << std::endl;
	*/
	//-----------------------------------------------------------------------------------------------------------------
	//Program memory map
	/*
	* Lot's of programs running on the OS could lead to running out of memory
	* As such, virtual memory is used. VM Fools the program to think it owns all the memory or address space
	* Virtual memory: each process has access to memory range of 0 ~ (2^N) - 1 where N is 32 on 32 bit systems and 64 on 64 bit operating systems
	* Memory management unit transforms between the memory map and the acutal memory of the computer. Only parts that are to be executed are loaded.
	* When multiple programs are running, the MMU assigns it memory on the actual RAM.
	* As such, the programs think that they own the complete memory while they actually only use part of it.
	* memory map is a standard format defined by the OS that must be followed by all programs written for that OS.
	* As such, why windows apps don't work on Linux as such and vice-versa
	* Stack part of memory stores local variables
	* Heap includes additional memory that can be used during run time
	* text includes the actual binary of our program
	* Heap is super important for dynamic memory
	*/
	//------------------------------------------------------------------------------------------------------------------------------------
	//Dynamic memory allocation
	/*
	* Dynamic memory allocation is the use of heap memory to use out program if the stack memory is not enough
	* Never use a pointer that has not been initialzed. It points to junk address and could corrupt data, crash program or write into memory being used by other program
	* So far we have used stack memory
	* stack is finite and developer isnt in full control of memory lifetime. Lifetime of variables is defined by the scope of the variable
	* Heap memory is finite and the developer is in full control of when memory is allocated and when it's released. Lifetime is controlled through explicit new and delete operators.
	* Never delete the same ptr twice.
	*/

	/*
	int* p_number{ nullptr };
	p_number = new int; //allocates piece of memory on the heap and no other program cannot use this memory until we explicitly return this to the system

	*p_number = 77;

	std::cout << " address: " << p_number << std::endl;

	//returning memory to OS
	delete p_number;
	p_number = nullptr; //Use this to let others know there is not useful data within this memory

	//we can also use
	int *pnum1{ new int};
	int *pnum2{ new int(22) };
	int* pnum3{ new int{24} };
	std::cout << " num1: " << *pnum1 << std::endl;
	std::cout << " num2: " << *pnum2 << std::endl;
	std::cout << " num3: " << *pnum3 << std::endl;
	delete pnum1;
	delete pnum2;
	delete pnum3;

	//we can use the same pointer to allocate new memory
	//pnum3 = new int(33);
	*/

	//--------------------------------------------------------------------------------------------------------------------
	//Dangling pointers
	/*
	* A dangling pointer is a pointer that does not point to a valid address.
	* Using a dangling pointer can result in unexpected behaviour
	* Three kinds:
	* Uninitialized pointer
	* Deleted pointer
	* Multiple pointers pointing to the same memory
	* uninitialized: int *pointnum;
	* deleted: delete pointnum; then try to deference it
	* multiple pointers:
	* int *pnum3{new int(32)};
	* int *pnum4{pnum3};
	* deleting pnum3 now will lead to unexpected problems
	* solutions:
	* Always initialize pointers
	* Reset pointers to null ptr after delete
	* For multiple pointers, make sure one pointer is the clear owner and other pointers cannot affect that memory
	* **Also a good habit. Use if(pnum != nullptr). This will make sure that a dangling pointer does not get used by the program
	*/

	//-------------------------------------------------------------------------------------------------------------------------------------------
	//'new' failure
	/*
	* While it is a rare possibility, new could be unable to allocate dynamic memory from the heap
	* when this happens, program can crash
	* failed memory allocation can be very bad and precautions should be taken as a good practice to handle these exceptions
	* We can handle this by :
	* use exception mechanism
	* use std::nothrow
	*/
	/*
	* This does not work.
	* Almost crashed my PC
	for (size_t i{ 0 }; i < 1000000000000; i++) {
		int* data = new int[1000000000];
	}

	std::cout << "Program is working just fine:)" << std::endl;
	*/
	//Catching exception
	/*
	for (size_t i{0}; i < 100; i++) {
		try {
			std::cout << i << std::endl;
			int* data = new int[1000000000];
		}
		catch (std::exception& ex) {
			std::cout << "something went wrong: " << ex.what() << std::endl;
		}
	}


	//using std::nothrow

	for (size_t i{ 0 }; i < 100; i++) {

			int* data = new(std::nothrow) int[1000000000];

			if (data != nullptr) {
				std::cout << "Data allocated" << std::endl;
			}
			else {
				std::cout << "Program failed" << std::endl;
			}
	}
	*/
	//----------------------------------------------------------------------------------------------------
	//null pointer safety
	/*
	* using null ptr to make sure we are using pointers with valid addresses
	* it is safe to call delete on a nullptr without checking if it is nullptr or not
	*/
	/*
	int *testpointer{ nullptr };
	testpointer = new int(57);
	if (!(testpointer == nullptr)) {
		std::cout << "testpointer points to a valid address" << std::endl;
	}
	else {
		std::cout << "testpointer does not point to a valid address" << std::endl;
	}

	//Alternate short way
	if (testpointer) {
		std::cout << "testpointer points to a valid address" << std::endl;
	}
	else {
		std::cout << "testpointer does not point to a valid address" << std::endl;
	}
	delete testpointer;
	testpointer = nullptr;
	*/

	//---------------------------------------------------------------------------------------------------------------
	//memory leak
	/*
	* losing access to a memory that was dynamically allocated to our program
	* these leaks can happen when we dynamically assign memory to a pointer and reassign another memory address to the same pointer without deleting the previous assignment
	* it can also happen if we assign dynamic memory to a pointer within a local scope but do not delete and reset it within that same scope
	* it can also happen if we initialize the pointer with a valid address then store some other address in it w/o deleting and resetting
	*/
	/*
	int* p_number{ new int(67) };
	int num{ 90 };

	//delete p_number here
	//delete p_number;
	//p_number = nullptr;
	p_number = &num; // memory leak since we didnt delete the previous memory allocation

	int* pnum2{ new int(55) };
	//delete here
	pnum2 = new int{ 44 }; //memory with int(55) has been leaked

	{
		int* pnum3{ new int{57} };
		//delete here or at the end of this scope, we will have memory leak
		//delete pnum3;
	}
	//memory with int{57} leaked
	*/

	//----------------------------------------------------------------------------------------------------------
	//dynamic arrays
	/*
	* arrays that can be allocated on heap rather than the stack
	* use nothrow and new to initialize array on the heap
	* use delete[] arrayName to delete it. set the pointer to null ptr
	* std::size doesnt work on heap based arrays
	*/
	//with dynamic arrays, size_t size does not need to be const unlike stack arrays
	size_t size{ 10 };

	double* psalary{ new double[size] };
	int* pstudents{ new(std::nothrow) int[size] };
	double* pscores{ new(std::nothrow) double[size] {1,2,3,4,5} };

	for (size_t i{}; i < size; i++) {
		std::cout << "value: " << pscores[i] << " : " << *(pscores+i) << std::endl;
	}
	delete[] psalary;
	psalary = nullptr;
	
	delete[] pstudents;
	psalary = nullptr;

	delete[] pscores;
	psalary = nullptr;

	//static arrays vs dynamic arrays

	/*
	* int scores [10] {1,2,3,4,5,6,....}
	* this can work with std::size
	* std::size(scores)
	* it can also work with auto for
	* for(auto s:scores){.........}
	* under heap based dynamic arrays,
	* std::size() does not work
	* auto for loop stuff also does not work. This is because pscores is not an array but a pointer to array
	*/
	return 0;
}