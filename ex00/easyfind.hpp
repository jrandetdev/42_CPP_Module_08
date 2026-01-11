#ifndef EASYFIND_HPP
# define EASYFIND_HPP

// accepts a type T, takes two parameters: firt one of type T and the second one is an int.
// T is a container of intergers, we need to find the first occurence of 
// the second parameter inside the first one. 

template <typename T>
void easyfind(T firstparam, int secondparam)
{
	// first param will be of any type of container from the std library
	// then insead of doing a for loop we need to use the algorithms provided in the <algorithm> library
	// no C like programming and don't forget this is a function or class?
	// need to declare the right one in the hpp and tpp file and include tpp file below
	// all functions that do not modify something need to be in const
};



#endif