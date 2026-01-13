#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

#include "Span.hpp"

void	spanTest()
{
	try
	{
		std::cout << "\nTest 3 (should print an error)" << std::endl;
		Span sp = Span(10);
		std::vector<int> v2(5, 1);
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
		sp.printELements();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void	basicTest()
{
	std::cout << "Test 1 (basic test)" << std::endl;
	try
	{
		Span test(3);
		test.addNumber(1);
		test.addNumber(2);
		test.addNumber(3);
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
	spanTest();
	return 0;
}
