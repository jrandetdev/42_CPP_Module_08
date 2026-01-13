#include "Span.hpp"
#include <limits>

Span::Span() : vec(), capacity(0)
{
	std::cout << "Default constructor called for Span class" << std::endl;
}

Span::Span(unsigned int n) : vec(0), capacity(n)
{
	std::cout << "Constructor with unsigned int n called" << std::endl;
}

Span::Span(const Span& other) : vec(other.vec), capacity(other.capacity)
{
	std::cout << "Copy consructor called" << std::endl;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->vec = other.vec;
		this->capacity = other.capacity;
	}
	std::cout << "Copy assignment consructor called" << std::endl;
	return *this;
}

Span::~Span()
{
	std::cout << "Default destructor called" << std::endl;
}

void	Span::addNumber(int n)
{
	if (vec.size() >= this->capacity)
		throw std::out_of_range("Error, not enough capacity for an additionl element!");
	vec.push_back(n);
	std::cout << "Successfully added a number to vec" << std::endl;
}

int	Span::shortestSpan()
{
	std::sort(vec.begin(), vec.end());
	int minDiff = std::numeric_limits<int>::max();
	for (unsigned int i = 0; i < (this->capacity - 1); ++i)
	{
		if ((vec[i + 1] - vec[i]) < minDiff)
			minDiff = (vec[i + 1] - vec[i]);
	}
	return minDiff;
}

int	Span::longestSpan()
{
	std::vector<int>::iterator itMax = std::max_element(vec.begin(), vec.end());
	std::vector<int>::iterator itMin = std::min_element(vec.begin(), vec.end());
	return (*itMax - *itMin);
}

void	Span::printELements()
{
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << std::endl;
}
