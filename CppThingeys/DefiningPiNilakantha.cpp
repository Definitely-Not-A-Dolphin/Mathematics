#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <string>
using namespace std;

bool listChecker(list<string> searchedList, string searchedWord);

long double nilakantha(int n);

int main() {
  int n;
  cout << endl << "What would you like n to be? ";
  cin >> n;

  int precision;
  cout << endl << "To what precision would you like to know the values? ";
  cin >> precision;

  cout << '\n'
       << "Would you like to compare all the values of pi up to that point? ";
  string compare;
  cin >> compare;

  list<string> yesList = {"Yes", "yes", "Yeah", "yeah",
                          "Yea", "yea", "Ye",   "ye"};

  if (listChecker(yesList, compare)) {
    for (int i = 1; i <= n; ++i) {
      cout << endl
           << "If n = " << i << ": " << setprecision(precision)
           << nilakantha(i);
    }
  } else {
    cout << endl
         << "If n = " << n << ": " << setprecision(precision) << nilakantha(n);
  };

  return 0;
}

bool listChecker(list<string> SearchedList, string SearchedWord) {
  bool result = false;

  for (string comparer : SearchedList) {
    if (comparer == SearchedWord) {
      result = true;
    }
  };

  return result;
}

long double nilakantha(int n) {
  long double total = 3;

  for (long double j = 1; j <= n; ++j) {
    total += pow(-1, j + 1) * 4 / ((2 * j) * (2 * j + 1) * (2 * j + 2));
  };

  return total;
}