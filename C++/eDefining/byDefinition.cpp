#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

#include "../mathFunctions.cpp"

long double definition(long double n, long double p);

int main() {
  std::cout << "What would you like n to be? ";
  int n;
  std::cin >> n;

  std::cout << std::endl
            << "To what precision would you like to know the values? ";
  int precision;
  std::cin >> precision;

  std::cout
      << std::endl
      << "Would you like to compare all the values of e up to that point? ";
  std::string compare;
  std::cin >> compare;

  std::cout << std::endl << "To what power would you like to raise e? ";
  int power;
  std::cin >> power;

  if (compare == "y" or compare == "Y") {
    for (int i = 1; i <= n; ++i) {
      std::cout << std::endl
                << "If n = " << i << ": " << std::setprecision(precision)
                << definition(i, power);
    }
  } else {
    std::cout << std::endl
              << "If n = " << n << ": " << std::setprecision(precision)
              << definition(n, power);
  };

  return 0;
}

long double definition(long double n, long double p) {

  long double total = pow(1 + p / n, n);

  return total;
}