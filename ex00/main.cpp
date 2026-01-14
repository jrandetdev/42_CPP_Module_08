#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <exception>
#include <algorithm>
#include "easyfind.hpp"

void basicTest()
{
    try {
        std::cout << "\n=== TEST 1: Basic easyfind on vector ===" << std::endl;
        std::vector<int> myVector;
        myVector.push_back(10);
        myVector.push_back(20);
        myVector.push_back(30);
        
        std::cout << "Initial vector:" << std::endl;
        printElements(myVector);
        
        std::vector<int>::iterator it = easyfind(myVector, 20);
        std::cout << "Value " << *it << " found at index " 
                  << it - myVector.begin() << std::endl;
        
        std::cout << "Searching for non-existent value 50..." << std::endl;
        easyfind(myVector, 50);
    }
    catch(const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}

void testVectorOperations()
{
    try {
        std::cout << "\n=== TEST 2: Vector operations ===" << std::endl;
        int arr[] = {11, 23, 45, 89};
        int n = sizeof(arr) / sizeof(arr[0]);
        std::vector<int> v(arr, arr + n);
        
        std::cout << "Initial vector:" << std::endl;
        printElements(v);
        
        std::cout << "Inserting 5 at index 2..." << std::endl;
        v.insert(v.begin() + 2, 5);
        printElements(v);
        
        std::cout << "Value at index 2 using at(): " << v.at(2) << std::endl;
        
        std::cout << "Erasing element with value 23..." << std::endl;
        v.erase(easyfind(v, 23));
        printElements(v);
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}

void testDequeOperations()
{
    try {
        std::cout << "\n=== TEST 3: Deque operations ===" << std::endl;
        int arr[] = {11, 23, 45, 89};
        int n = sizeof(arr) / sizeof(arr[0]);
        std::deque<int> d(arr, arr + n);
        
        std::cout << "Initial deque:" << std::endl;
        printElements(d);
        
        std::cout << "Inserting 5 at index 2..." << std::endl;
        d.insert(d.begin() + 2, 5);
        printElements(d);
        
        std::cout << "Value at index 2 using at(): " << d.at(2) << std::endl;
        
        std::cout << "Erasing element with value 23..." << std::endl;
        d.erase(easyfind(d, 23));
        printElements(d);
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}

void testListOperations()
{
    try {
        std::cout << "\n=== TEST 4: List operations ===" << std::endl;
        int arr[] = {11, 23, 45, 89};
        int n = sizeof(arr) / sizeof(arr[0]);
        std::list<int> l(arr, arr + n);
        
        std::cout << "Initial list:" << std::endl;
        printElements(l);
        
        std::cout << "Inserting 5 at beginning..." << std::endl;
        l.insert(l.begin(), 5);
        printElements(l);
        
        std::cout << "Erasing element with value 23 with result of easyfind..." << std::endl;
        l.erase(easyfind(l, 23));
        printElements(l);
        
        std::cout << "Searching for value 45..." << std::endl;
        std::list<int>::iterator it = easyfind(l, 45);
        std::cout << "Value " << *it << " found at position " 
                  << std::distance(l.begin(), it) << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}

int main()
{
    basicTest();
    testVectorOperations();
    testDequeOperations();
    testListOperations();
    
    std::cout << "\n=== All tests completed ===" << std::endl;
    return 0;
}
