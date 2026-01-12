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
 * when defining a template, a nested type or class such as the iterator class termplate 
 * has access to all the containter class's internal data. It can easily interact
 * with the private memebers of the container. 
 * 
 * In this particular case, T is the container class which is received as a parameter
 * sd for the nested iterator in this particular case, we need to specify that
 * the iterator class will be nested in a container type T, for example vector or list.
 * 
 * C++ iterators all have the same interface, no matter the container they are in.
 * This means they work on any data structure and not just arrays.
 * 
 * we declare it of type T::iterator (in known type code it would be std::vector<int>::iterator)
 * 
 * to be able to use find, we need an iterator, which is why i define it first. 
 * 
 */
template <typename T>
typename T::iterator easyfind(T& container, int element)
{
	// find returns an iterator pointing to the value element otherwise returns end iterator
	typename T::iterator result = std::find(container.begin(), container.end(), element);
	if (result == container.end())
		throw std::runtime_error("Error! No occurence of the second parameter has been found in the container given.");
	else
	{
		std::cout << "Success! Occurence has been found."  << std::endl; 
		return result;
	}
}



#endif
