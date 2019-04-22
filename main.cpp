/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;
	Test myTester;
	// myTester.runTests();
	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();
	std::cout << "size of empty List is Zero: ";
	if(testableList.isEmpty() == true) {
		std::cout << "PASSED" << std::endl;
	}
	else {
		std::cout << "FAILED" << std::endl;
	}
	std::cout << "size of empty non-empty List is non-Zero: ";
	testableList.addFront(1);
	testableList.addBack(1);
	if(testableList.isEmpty() == false) {
		std::cout << "PASSED" << std::endl;
	}
	else {
		std::cout << "FAILED" << std::endl;
	}

	std::cout << "size returns correct value after 1 addFront: ";
	if(myTester.addFrontTest() == true) {
		std::cout << "PASSED" << std::endl;
	}
	else {
		std::cout << "FAILED" << std::endl;
	}

	std::cout << "size returns correct value after 1 addBack: ";
	if(myTester.addBackTest() == true) {
		std::cout << "PASSED" << std::endl;
	}
	else {
		std::cout << "FAILED" << std::endl;
	}

	std::cout << "size returns correct value after 1 removeBack: ";
	if(myTester.removeBackTest() == true) {
		std::cout << "PASSED" << std::endl;
	}
	else {
		std::cout << "FAILED" << std::endl;
	}

	std::cout << "size returns correct value after 1 removeFront: ";
	if(myTester.removeFrontTest() == true) {
		std::cout << "PASSED" << std::endl;
	}
	else {
		std::cout << "FAILED" << std::endl;
	}

	std::cout << "Search value returns true for a value inserted into list: ";
	if(myTester.searchTest() == true) {
		std::cout << "PASSED" << std::endl;
	}
	else {
		std::cout << "FAILED" << std::endl;
	}

	std::cout << "size returns correct value: ";
	if(myTester.sizeTest() == true) {
		std::cout << "PASSED" << std::endl;
	}
	else {
		std::cout << "FAILED" << std::endl;
	}




	return (0);
}
