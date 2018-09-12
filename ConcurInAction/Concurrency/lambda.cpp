#include <iostream>
using namespace std;

void
lambda_0()
  {
      auto lambda = []() { cout << "Code within a lambda expression" << endl; };
      lambda();
  }
