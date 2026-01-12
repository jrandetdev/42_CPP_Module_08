#include <iostream>
#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <exception>
#include <algorithm>

void	testListOperations()
{
	try {
		std::cout << "\nTEST 2" << '\n';
		int arr[] = {11, 23, 45, 89};
		int n = sizeof(arr) / sizeof(arr[0]);
		std::list<int> l(arr, arr + n);
		l.insert(l.begin(), 5);
		printELements(l);
		l.erase(easyfind(l, 23));
		printELements(l);
		std::list<int>::iterator it = easyfind(l, 45);
		std::cout << "In list, value " << *it << " found at " <<  &it << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void	testDequeOperations()
{
	try {
		std::cout << "\nTEST 2" << '\n';
		int arr[] = {11, 23, 45, 89};
		int n = sizeof(arr) / sizeof(arr[0]);
		std::deque<int> d(arr, arr + n);
		d.insert(d.begin() + 2, 5);
		printELements(d);
		std::cout << " at index 2 using at() : " << d.at(2) << std::endl;
		d.erase(easyfind(d, 23));
		printELements(d);
	}
	catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void	testVectorOperations()
{
	try {
		std::cout << "\nTEST 2" << '\n';
		int arr[] = {11, 23, 45, 89};
		int n = sizeof(arr) / sizeof(arr[0]);
		std::vector<int> v(arr, arr + n);
		v.insert(v.begin() + 2, 5);
		printELements(v);
		std::cout << "Vector at index 2 using at() : " << v.at(2) << std::endl;
		v.erase(easyfind(v, 23));
		printELements(v);
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
		std::vector<int>::iterator it = easyfind(myVector, 20);
		std::cout << *it << " found at " << it - myVector.begin() << std::endl;
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
	testDequeOperations();
	testListOperations();
	return 0;
}
