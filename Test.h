
#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"

class Test {
public:
  Test();
  ~Test();
  bool addFrontTest();
  bool addBackTest();
  bool removeBackTest();
  bool removeFrontTest();
  bool searchTest();
  bool sizeTest();
private:
	// LinkedListOfInts testableList;

};

// #include "Test.hpp"

#endif
