#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

/**
 * @brief introduces the concept of what a container adaptor is a special container that changes
 * or limits how we use existing containers.
 * 
 * They are specialised interfaces created on top of other sequential containers sich as deque, vector
 * You avoid defining a completely new interface for containers that can be built on top 
 * of existing containers 
 * 
 * MutantStack would be a stack class based on stack which is a stack adapter which follows a LIFO principle
 * Insertion and removal of elements can only be done from the top of the queue container.
 * 
 * The following key operations can be used:
 * - push(elm) insert elem at the top
 * - pop() removes top element
 * - top() returns a ref to top
 * - size() returns the number of elements
 * - empty() checks wether it is empty or not
 * 
 * a container adaptor acts as a wrapper to the unerlying container. It is a template that receives 
 * <class T, class Container = std::deque<T>> in the case of stack, and has the member types
 * container_type.
 * 
 * 
 * Here we also discover the concept of a nested class member type.
 * 
 * all adapter classes have a protected member c which is the underlying container, and we can access
 * it directly. Because sequential containers. Many of the container adaptor public methods are wrappers around
 * calls to this non public element (protected member c). So here we export the functionality which 
 * is needed. Since a container adaptor does not implement the interface of a container, it does
 * not provide me with the iterator. It provides a limited access to a container. 
 * 
 * @tparam T 
 */
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &other);
		MutantStack& operator=(const MutantStack &other);
		~MutantStack();
		// create alias called it for the iterator type of any container used inside MutantStack
		typedef typename MutantStack<T>::container_type::iterator iterator; // follows the typedef [type definition] [new_name]
		iterator begin();	// 
		iterator end();	// creating the two functions which will return an iterator
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>::stack() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>::stack(other)
{
	// since we inherit properties of stack, check if stack has its own copy constructor 
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

#endif
