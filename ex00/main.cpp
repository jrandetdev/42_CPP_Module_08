#include <iostream>
#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <exception>
#include <algorithm>

int main()
{
	try {
		std::vector<int> myVector;
		myVector.push_back(10);
		myVector.push_back(20);
		myVector.push_back(30);
		easyfind(myVector, 20);
		easyfind(myVector, 50);
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl; // reminder that what() is a virtual memeber function which can be overridden
	}
	return 0;
}
