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
};


#endif
