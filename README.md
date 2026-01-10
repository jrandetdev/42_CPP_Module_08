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

Containers usually contain a homogeneous type of data. Containers can contain int, char, strings etc. and usually containers are typically implemented as class templates so that the user (caller) can provide the desired element type. Heterogeneous containers are supported in languages such as python.

---

## Containers in C++

containers are part of the C++ Container library that implement common types of containers. A class type that implements a container is called a container class. in C++, only the containers in the ciontainers liubrary are considered to be containers in c++. In C++, containers must be class types, and fulfill a set of requirements. They need to implement certain member functions. std::string is not a container, but it does most of the requirements so it is considered as a `pseudo-container`.

## Array

Array is a container data type that stores a sequence of values contiguously, meaning they are all placed in adjacent memory locations with no gaps. It allows super fast access to members and are simple to use. 
C++ contains three primary array types
- C style arrays
- std::vector container class
- std::array container class

C-style arrays are sometimes called naked arrays, fixed size arrays, or built-in arrays.

Vector was introduced and is more safe than C-style arrays, is the most flexible of the three, and offers a lot more capabilities that the other types of array do not offer. 

std::array container class is more limited than vectors and is similar to C-style arrays, but it is more efficient, especially for smaller arrays.

## Introduction to std::vector

std::vector is one of the container classes that implements an array.

It is defined in the <vector> header as a class tmeplate, with template type parameters that defines the type of the elemnts. 

for example, std::vector<int> declares a vector who's elements are int. 

```cpp
std::vector<int> empty{}
```

`empty` is defined as a std::vector which contains elements of type int.

Containers typically have a special constructor called a list constructor that allows us to construct an instance of the container using an intialiser list. The `list constructor` does 3 things
1. ensures the container has enougb storage to hold all the initialisation values (capacity)
2. Sets the length of the container to the number of elements in the initialiser list (if needed)
3. Inititalises the elements to the values in the intialiser list in sequential order. 

## accessing elements of the array using the subscript operator[]

Subscript means index. array[0] will return the element contained at the 0th (first) location inside the array. We can then read it, change it, extract it, etc. Its an offset from the first element of the array (address)

we need to subscript within the bounds of an array so between 0 and N-1. The operator[] does not do any check itself to see if you are in bounds or not, so passing an invalid index will return undefined behaviour.

## contiguous memory

elements are sepatated by the size of their types (4 bytes for int, 1 for char). They are contained in contigupous memory, meaning they are all next to eachpother which makes accessing them in any order directly. This opposes to containers where you can only access members in a sequential order.

## Constructing vectors of specific length

std::vector has an explicit constructor 

```cpp
explicit std::vector<T>(std::size_t)
```

that takes a single argument of size_t which defines the length of the vector container. 

Each of the created elements are value-initialised which for int is 0 intitialised and for classes, it calls the default constructor.

```cpp
std::vector<int> data(10) // vector containing 10 int elements and they are value initialised according to the type (0 for int, and something for the class according to the default constructor)
```

