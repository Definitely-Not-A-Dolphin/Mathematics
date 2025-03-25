#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

long double nilakanthaMethod(int n);
long double nilakanthaMethodTerm(int n);

int main() {
  int n;
  std::cout << std::endl << "What would you like n to be? ";
  std::cin >> n;

  int precision;
  std::cout << std::endl
            << "To what precision would you like to know the values? ";
  std::cin >> precision;

  std::cout
      << std::endl
      << "Would you like to compare all the values of pi up to that point? ";
  std::string compare;
  std::cin >> compare;

  if (compare == "y") {
    for (int i = 1; i <= n; i++) {
      std::cout << std::endl
                << "If n = " << i << ": " << std::setprecision(precision)
                << nilakantha(i);
    }
  } else {
    std::cout << std::endl
              << "If n = " << n << ": " << std::setprecision(precision)
              << nilakantha(n);
  };

  return 0;
}

long double nilakantha(int n) {
  long double total = 3;

  for (long double j = 1; j <= n; ++j) {
    total += nilakanthaTerm(j);
  };

  return total;
}

long double nilakanthaTerm(int n) {
  return pow(-1, n + 1) * 4 / ((2 * n) * (2 * n + 1) * (2 * n + 2));
}