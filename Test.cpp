#include "Test.h"
Test::Test() {

}
Test::~Test() {

}

bool Test::sizeTest() {
    LinkedListOfInts testableList;
    bool flag = true;
    testableList.addFront(1);
    testableList.addFront(1);
    unsigned int vectorSize = testableList.toVector().size();
    unsigned int listSize = testableList.size();
    if( vectorSize != listSize) {
      flag = false;
    }
    return flag;
}

bool Test::addFrontTest() {
  LinkedListOfInts testableList;
  testableList.addFront(1);
  testableList.addFront(2);
  bool flag;
  if(testableList.toVector().at(0) == 2) {
    flag =  true;
  }
  else {
    flag = false;
  }
  return flag;
}

bool Test::addBackTest() {
  LinkedListOfInts testableList;
  testableList.addBack(1);
  testableList.addBack(2);
  bool flag;
  if(testableList.toVector().at(0) == 1) {
    flag =  true;
  }
  else {
    flag = false;
  }
  return flag;
}

bool Test::removeBackTest() {
  LinkedListOfInts testableList;
  testableList.addBack(1);
  testableList.addBack(2);
  testableList.removeBack();
  bool flag;
  if(testableList.toVector().size() == 1) {
    flag =  true;
  }
  else {
    flag = false;
  }
  return flag;
}

bool Test::removeFrontTest() { //remove front and back both can remove a single item, but do nothing if there are multiple
  LinkedListOfInts testableList;
  testableList.addFront(1);
  testableList.addFront(2);
  testableList.removeFront();
  bool flag;
  if(testableList.toVector().size() == 1) {
    flag =  true;
  }
  else {
    flag = false;
  }
  return flag;
}

bool Test::searchTest() {
  LinkedListOfInts testableList;
  testableList.addFront(4);
  testableList.addFront(3);
  testableList.addBack(2);
  testableList.addBack(1);
  bool flag = true;
  for(int i = 1; i<5; i++) {
    if(testableList.search(i) == false) {
      flag = false;
    }
  }
  for(int i = 5; i< 10; i++) {
    if (testableList.search(i) == true) {
      flag = false;
    }
  }
  return flag;
}
