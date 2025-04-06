#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

#include "../mathFunctions.cpp"

unsigned long long factorial(int n);

int main() {
  std::cout << "How many terms do you like to add? ";
  int terms;
  std::cin >> terms;

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

  long double total1 = 0;

  if (compare == "y" or compare == "Y") {
    for (int k = 0; k <= terms - 1; ++k) {
      total1 += (pow(power, k)) / factorial(k);
      std::cout << std::endl
                << "For " << k + 1
                << " terms added: " << std::setprecision(precision) << total1;
    }
  } else {
    for (int j = 0; j <= terms - 1; ++j) {
      total1 += (pow(power, j)) / factorial(j);
    }
    std::cout << std::endl
              << "For " << terms
              << " terms added: " << std::setprecision(precision) << total1;
  };
}