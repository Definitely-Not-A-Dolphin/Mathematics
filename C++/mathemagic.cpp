unsigned long long factorial(int n) {

  unsigned long long total = 1;

  if (n != 0) {
    for (int i = 1; i <= n; i++) {
      total *= i;
    };
  };

  return total;
}

long double inverseFactorial(int n) {
  long double total = 1;

  if (n != 0) {
    for (long double i = 1; i <= n; i++) {
      total /= i;
    };
  };

  return total;
}

int integerPow(int n, int k) {
  unsigned long long result = 1;

  for (int p = 1; p <= k; p++) {
    result *= n;
  };

  return result;
}