#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <string>
using namespace std;

bool finder(list<string> searchedList, string searchedWord);

long double definition(long double n,long double p);

int main(){
    cout << endl << "What would you like n to be? ";
    int n;
    cin >> n;

    cout << endl << "To what precision would you like to know the values? ";
    int precision;
    cin >> precision;

    cout << '\n' << "Would you like to compare all the values of e up to that point? ";
    string compare;
    cin >> compare;

    cout << endl << "To what power would you like to raise e? ";
    int power;
    cin >> power;

    list<string> yesList = {"Yes", "yes","Yeah","yeah","Yea","yea","Ye","ye"};

    if(finder(yesList, compare)){
        for (int i=1;i <= n; ++i){
            cout << endl << "If n = " << i << ": " << setprecision(precision) << definition(i,power);
        }
    }
    else{
        cout << endl << "If n = " << n << ": " << setprecision(precision) << definition(n,power);
    };

    return 0;
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

long double definition(long double n,long double p) {
    
    long double total = pow(1 + p/n,n);

    return total;
}