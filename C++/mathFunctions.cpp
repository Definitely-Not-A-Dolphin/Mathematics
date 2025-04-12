#include <cmath>

template <typename realAbsTypename> realAbsTypename realAbs(realAbsTypename n) {
  if (n < 0) {
    return -n;
  };

  return n;
};

template <typename floorTypename> int floor(floorTypename n) {

  int counter = 0;

  n = realAbs(n);

  while (n >= 0) {
    n--;
    counter++;
  };

  return counter;
};

unsigned long long factorial(int n) {

  unsigned long long total = 1;

  if (n == 0 or n == 1) {
    return 1;
  };

  for (int i = 2; i <= n; i++) {
    total *= i;
  };

  return total;
}

long double inverseFactorial(int n) {

  long double total = 1;

  if (n == 0 or n == 1) {
    return 1;
  };

  for (long double i = 2; i <= n; i++) {
    total /= i;
  };

  return total;
}

template <typename realPowerIntTypename>
realPowerIntTypename realPowInt(realPowerIntTypename n, int k) {
  unsigned long long result = 1;

  if (k == 0) {
    return 0;
  }

  for (int p = 1; p <= k; p++) {
    result *= n;
  };

  return result;
}

bool isPrime(int n) {
  int d = 1;

  for (int i = 1; i <= ceil((n + 1) / 2); i++) {
    if (n % i == 0) {
      d += 1;
    }
  };

  if (d == 2) {
    return true;
  }

  return false;
}