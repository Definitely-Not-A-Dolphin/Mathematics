#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <string>
using namespace std;

bool finder(list<string> searchedList, string searchedWord);

double nilakantha(int n);

int main(){
    int n;
    cout << endl << "What would you like n to be? ";
    cin >> n;

    int p;
    cout << endl << "To what precision would you like to know the values? ";
    cin >> p;

    cout << '\n' << "Would you like to compare all the values of pi up to that point? ";
    string dec3;
    cin >> dec3;

    list<string> yesList = {"Yes", "yes","Yeah","yeah","Yea","yea"
    ,"Ye","ye"};

    if(finder(yesList, dec3)){
        for (int i=1;i <= n; ++i){
            cout << endl << "If n = " << i << ": " << setprecision(p)<< nilakantha(i);
        }
    }
    else{
        cout << endl << "If n = " << n << ": " << setprecision(p) << nilakantha(n);
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

double nilakantha(int n) {
    double total = 3;

    for (double j=1;j<=n;++j){
        total += pow(-1,j+1)*4/((2*j)*(2*j+1)*(2*j+2));
    };

    return total;
}