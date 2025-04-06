#include <cmath>
#include <iostream>
#include <string>

std::string primer(int n);

int main() {

  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  std::string y;
  std::cout << std::endl
            << "Do you want to know all the numbers up to that point? ";
  std::cin >> y;

  if (y == "y" or y == "Y") {
    for (int k = 1; k <= number; ++k) {
      std::cout << std::endl << k << " is " << primer(k);
    }
  } else {
    std::cout << std::endl << number << " is " << primer(number);
  }
}

std::string primer(int n) {
  int d = 1;

  for (int i = 1; i <= ceil((n + 1) / 2); i++) {
    if (n % i == 0) {
      d += 1;
    }
  };

  if (n == 1) {
    return "Not Prime";
  }
  if (d == 2) {
    return "Prime";
  } else {
    return "Composite";
  }
}