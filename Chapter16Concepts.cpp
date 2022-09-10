#include<iostream>
#include<concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b) {
	return a + b;
}


int main() {
	//Concepts

	//Concepts are a mechanism to place constraints on template type functions
	//One of the big features of C++ 20
	//There are standard build in concepts or we can build our own
	//integral to ensure integer, floating_point to ensure they are of type floating_point
	//As such, we can use it to specify that we only want the template to be called using integers or floating points etc
	/*
	* template <typename T>
	  requires std::integeral<T>
	  T add(T a, T b){
	  ......
	  }
	*/
	int a(20);
	int b(30);

	char x(20);
	char y(30);
	return 0;
}