#include <cmath>
#include <iostream>
#include "mathFunctions.cpp"

int denominatorCount(int n);

int main() {

  for (int k = 1; k <= 100; k++) {
    std::cout << "k = " << k << ": " << denominatorCount(k) << std::endl;
  };
  return 0;
}

int denominatorCount(int n) {

  int result = 0;

  for (int k = 1; k <= n; k++) {
    if (n % k == 0) {
      result++;
    };
  };

  return result;
}