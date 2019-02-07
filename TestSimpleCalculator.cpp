//File: TestSimpleCalculator.cpp
#include <iostream>
using namespace std;

#include "SimpleCalculator.h"


int test1() {
  SimpleCalculator sc;
  int n1 = 2;
  int n2 = 5;
  int r = sc.add(n1, n2);
  cout << "\n" << "n1 + n2 = " << n1 << " + " << n2 << " = " << r << "       ";
  if (n1 + n2 != r) {
     cout << "Fail" << endl;
     return 1;
  } else {
     cout << "Pass" << endl;
  }
  return 0;
}

int test2() {
  SimpleCalculator sc;
  int n1 = 2;
  int n2 = 1;
  int r = sc.sub(n1, n2);
  cout << "\n" << "n1 - n2 = " << n1 << " - " << n2 << " = " << r << "       ";
  if (n1 - n2 != r) {
     cout << "Fail" << endl;
     return 1;
  } else {
     cout << "Pass" << endl;
  }
  return 0;
}

int main(void) {
  int res = 0;
  res = test1();
  if (1 == res) return 1;

  res = test2();
  if (1 == res) return 1;

  return 0;
}
