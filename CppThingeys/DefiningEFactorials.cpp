#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <string>
using namespace std;

bool finder(list<string> searchedList, string searchedWord);

unsigned long long factorial(int n);

int main() {
    cout << "How many terms do you like to add? ";
    int terms;
    cin >> terms;

    cout << '\n' << "To what precision would you like to know the values? ";
    int precision;
    cin >> precision;

    cout << '\n' << "Would you like to compare all the values of e up to that point? ";
    string compare;
    cin >> compare;

    cout << '\n' << "To what power would you like to raise e? ";
    int power;
    cin >> power;

    list<string> yesList = {"Yes", "yes","Yeah","yeah","Yea","yea","Ye","ye"}; 

    long double total1 = 0;

    if(finder(yesList, compare)) {
        for (int k = 0; k <= terms-1; ++k) {
            total1 += (pow(power,k))/ factorial(k);
            cout << '\n' << "For " << k+1 << " terms added: " << setprecision(precision) << total1;
        }
    }
    else{
        for (int j = 0; j <= terms-1; ++j) {
            total1 += (pow(power,j))/ factorial(j);
        }
    cout << '\n' << "For " << terms << " terms added: " << setprecision(precision) << total1;
    };
}

bool finder(list<string> searchedList, string searchedWord) {
    bool result = false;

    for(string comparer : searchedList) {
        if(searchedWord == comparer){
            result = true;
        }
    };

    return result;
}

unsigned long long factorial(int n) {
    int subtotal = 1;
    
    for(int i = 1; i <= n; ++i) {
        subtotal *= i;
    };

    return subtotal;
}