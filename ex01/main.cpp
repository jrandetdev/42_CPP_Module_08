#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

#include "Span.hpp"

int main()
{
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
