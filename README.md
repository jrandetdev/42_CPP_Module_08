# 42_CPP_Module_08

---

## Introduction to containers

A container is a data type that provides storage for a collection of unnamed objects called elements.

For example, std::string is a container for characters which can then be outputed as text. 

A container, contrarily to a struct, has a name but contains only *unnamed* elements (a struct contains named elements, variables).

Each container thus provides different ways to access their elements (exactly how depends on the type of container).

## length of a container

The number of elements contained inside a container is called its length (or count). for example string.length could be 5 for the number of characters inside the array.

length is a bit better.

## What can you do with elements from a container?

You can open it, look at whats inside (elements), add an element, remove an element, do whatever I want with that element. 

containers typically implement a signifacnt subset of the following operations:
- create a container (usually empty or with an initial number of elements, or initialised to certain values)
- Access to elements with accessors.
- Insert or remove elements
- Get number of elements inside a container
- Other operations to manipulate and manage the collection of elements.

Each container has its specifics, including strengths and weaknesses. Some containers allow easy access to elements to any element (arrays) but not support easy insertion or removal of elements (linked lists for example). Picking the right type of container for the task you are trying to solve can have huge effects on code maintability, overall performance, etc.

## element types

Containers usually contain a homogeneous type of data (the classic built in types or user defined types like classes etc.). Containers can contain int, char, strings etc. and usually containers are typically implemented as class templates so that the user (caller) can provide the desired element type. Heterogeneous containers are supported in languages such as python.

---

## Containers in C++

containers are part of the C++ Container library that implement common types of containers. A class type that implements a container is called a container class. in C++, only the containers in the ciontainers liubrary are considered to be containers in c++. In C++, containers must be class types, and fulfill a set of requirements. They need to implement certain member functions. std::string is not a container, but it does most of the requirements so it is considered as a `pseudo-container`.

- 	(C++11) fixed size contiguopus array
- *vector*	resizeable contiguous array
- 	double ended queue
- 	list singly linked list
- *list*	double linked list 

|  container  | specifics |
| :--------: | :-------: |
|  *array*  | fixed size contiguopus array |
|  *vector*  | resizeable contiguous array |
| *forward_list* | double ended queue |
|  *forward_list* | singly linked list |
|  *list* | singly linked list |



vectors automatically grow when elements are added beyond its current capacity. 
- a programer does not need to worry about maitaining the capacity or reallocating it, or initialising extra space. 
- The reallocation (doubling in memory) is a bit costly it terms of operations. If too costly, use array
- They support bound checking with v.at(i) index i and vector v.

Iterators is like a pointer, and begin() and end() are methods of the container, not the iterartor. begin() returns iterator pointing to the first element. 
end() does the same for the item PAST the final element of the container. 


