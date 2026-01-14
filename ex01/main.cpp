#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

#include "Span.hpp"

void	negativeTest()
{
	try
	{
		std::cout << "\nTest 5: negative numbers" << std::endl;
		Span sp(4);
		sp.addNumber(1);
		sp.addNumber(-1);
		sp.addNumber(-5);
		sp.printELements();
		std::cout << "Shortest span is " << sp.shortestSpan() << std::endl;
		std::cout << "after shortest span, the array is sorted" << std::endl;
		sp.printELements();
		std::cout << "Longest span is " << sp.longestSpan() << std::endl;
		sp.addNumber(-15);
		sp.printELements();
		std::cout << "Longest span is " << sp.longestSpan() << std::endl;
	}	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	hugeSpantest()
{
	try
	{
		std::cout << "\nTest 4: hugeSpanTest (10000 elements)" << std::endl;
		Span s(10000);
		std::vector<int> vec;
		for (int i = 0; i < 10000; ++i)
			vec.push_back(rand());
		std::cout << "size of the vector is " << s.getVec().size() << \
		" and capacity is " << s.getVec().capacity() << " but our assigned capacity N is " << s.getAssignedCapacity() << std::endl;
		s.addRange(vec.begin(), vec.end());
		s.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	addRangeTest()
{
	try
	{
		std::cout << "\nTest 3: filling capacity and then adding more." << std::endl;
		Span sp = Span(10);
		std::cout << "size of the vector is " << sp.getVec().size() << \
		" and capacity is " << sp.getVec().capacity() << " but our assigned capacity N is " << sp.getAssignedCapacity() << std::endl;
		std::vector<int> v2(10, 1);
		sp.addRange(v2.begin(), v2.end());
		std::cout << "size of the vector is " << sp.getVec().size() << \
		" and capacity is " << sp.getVec().capacity() << " but our assigned capacity N is " << sp.getAssignedCapacity() << std::endl;
		std::cout << "I am trying to add 10 more elemtns, error expected..." << std::endl;
		sp.addRange(v2.begin(), v2.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	givenMain()
{
	std::cout << "\nTest 2 (given main)" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span is " << sp.shortestSpan() << std::endl;
		std::cout << "longest span is " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void	basicTest()
{
	std::cout << "Test 1: adding one extra number which is above capacity" << std::endl;
	try
	{
		Span test(3);
		test.addNumber(1);
		test.addNumber(2);
		test.addNumber(3);
		std::cout << "Should throw exception..." << std::endl;
		test.addNumber(4);
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

int main()
{
	basicTest();
	givenMain();
	addRangeTest();
	hugeSpantest();
	negativeTest();
	return 0;
}
