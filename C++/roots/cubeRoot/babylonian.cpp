#include <iostream>
#include "../../mathFunctions.cpp"

double babylonianMethod(int n, int iterator) {
  double initialGuess = n / 3;

  if (iterator == 0) {
    return initialGuess;
  }

  double newApprox = (babylonianMethod(n, iterator - 1) +
                      n * (1 / babylonianMethod(n, iterator - 1))) /
                     2;

  return newApprox;
}

int main() {

  std::cout << babylonianMethod(10, 20) << std::endl;

  return 0;
}