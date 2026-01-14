#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <exception>
#include <algorithm>


// accepts a type T, takes two parameters: firt one of type T and the second one is an int.
// T is a container of intergers, we need to find the first occurence of 
// the second parameter inside the first one. 

/**
 * @return tyename T::iterator 
 * 
 */
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

template <typename T>
void	printElements(T& container)
{
	for (typename T::iterator it = container.begin(); it != container.end(); ++it)
		std::cout << *it << std::endl;
}

#endif
