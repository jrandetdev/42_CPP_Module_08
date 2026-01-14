#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <list>
#include <exception>

#ifndef SPAN_HPP
# define SPAN_HPP



class Span
{
	private:
		std::vector<int>		vec;
		unsigned int			capacity;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
		void addNumber(int n);
		int	longestSpan();
		int	shortestSpan();
		void	printELements();
		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		std::vector<int> getVec();
		unsigned int	getAssignedCapacity();
};

template <typename T>
typename T::iterator easyfind(T& container, int element)
{
	// find returns an iterator pointing to the value element otherwise returns end iterator
	typename T::iterator result = std::find(container.begin(), container.end(), element);
	if (result == container.end())
		throw std::runtime_error("Easyfind: Error! No occurence of the second parameter has been found in the container given.");
	else
	{
		std::cout << "Easyfind: Occurence of " << element << " has been found in container" << std::endl; 
		return result;
	}
}

#endif
