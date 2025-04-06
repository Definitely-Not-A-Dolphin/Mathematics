#include <iostream>

double babylonianMethod(int n, int iterator) {
  double initialGuess = n/2;

  if (iterator == 0) {
    return initialGuess;
  }

  double newApprox = (babylonianMethod(n, iterator - 1) +
                      n / babylonianMethod(n, iterator - 1)) /
                     2;

  return newApprox;
}

int main() {

  std::cout << babylonianMethod(10,20) << std::endl;

  return 0;
}