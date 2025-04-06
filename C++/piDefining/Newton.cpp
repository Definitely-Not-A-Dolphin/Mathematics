#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

#include "../mathFunctions.cpp"

long double newtonMethod(int n);
long double newtonMethodTerm(long double k);
long double sqwuimble(long double k);

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
                << newtonMethod(i);
    }
  } else {
    std::cout << std::endl
              << "If n = " << n << ": " << std::setprecision(precision)
              << newtonMethod(n);
  };

  return 0;
}

long double sqwuimble(long double n) {
  long double result = 1;

  if (n == 0) {
    return result;
  };

  for (long double k = 0; k <= n - 1; k++) {
    result *= (.5 - k);
  };

  return result;
}

long double newtonMethod(int n) {
  long double total = 0;

  for (long double j = 0; j <= n; j++) {
    total += newtonMethodTerm(j);
  };

  return total;
}

long double newtonMethodTerm(long double k) {

  long double result = 4 * (integerPow(-1, k) * (1 / (2 * k + 1)) *
                            inverseFactorial(k) * sqwuimble(k));

  return result;
}