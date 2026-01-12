#include <iostream>
#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <exception>
#include <algorithm>

void	testVectorOperations()
{
	try {
		int arr[] = {11, 23, 45, 89};
		int n = sizeof(arr) / sizeof(arr[0]);
		std::vector<int> v(arr, arr + n);
		v.insert(v.begin() + 2, 5);
		for (std::vector<int>::iterator it = v.begin(); it < v.end(); ++it)
			std::cout << *it << std::endl;
		std::cout << "Vector at index 2 using at() : " << v.at(2) << std::endl; 
	}
	catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void	basicTest()
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
}

int main()
{
	basicTest();
	testVectorOperations();
	return 0;
}
