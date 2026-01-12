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

|  container  | specifics |
| :--------: | :-------: |
| *array* | fixed size contiguopus array |
| *vector* | resizeable contiguous array |
| *forward_list* | double ended queue |
| *forward_list* | singly linked list |
| *list* | singly linked list |

## Vectors

- elements stored contigously meaning elements can be accessed with iterator, but also using offsets to regular pointers to elements. A pointer to an element of a vector may be passed to any functiopn that exoects a poiinter to an element of an array.
- storage is automatically handled, expanded when needed. this means they occupy more space than traditional arrays. They only add additional memory when the additional memory requested is exhausted, not whenever an element is added to an array.
- Total amount of allocated memory can be optained using the .capacity() member funbction-. 

vectors automatically grow when elements are added beyond its current capacity. 
- a programer does not need to worry about maitaining the capacity or reallocating it, or initialising extra space. 
- The reallocation (doubling in memory) is a bit costly it terms of operations. If too costly, use array
- They support bound checking with v.at(i) index i and vector v.
- all member functions are constexpr: meaning it is possible to create and use std::vector objects in the evaluation of constant expressions.
- the vector objects however are nopt because they need to be dynamically allocated and it must be released iun the same evaluation of constant expressions.

Iterators can become invalidated after certain operations, meaning they can be invalid or dangerous to use. Generally, all the read opperations like size(), at(), and operator[] never invalidate an operator. 

When you use push_back for example, if there is space, then only the end() pointer moves. But if there is no space, and the vector reallocates, then all iterators all point to a previously allocated old (freed) memory.

Its prefered to get the iterator after elemnents have been pushed back.

````
std::vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);

// Get iterator AFTER all insertions
std::vector<int>::iterator it = v.begin();
std::cout << *it;  // ✓ Safe
```



Iterators is like a pointer, and begin() and end() are methods of the container, not the iterartor. begin() returns iterator pointing to the first element. 
end() does the same for the item PAST the final element of the container. 


