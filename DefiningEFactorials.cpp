#include <iostream>
#include <iomanip>
#include <list>
#include <string>
using namespace std;

int finder(list<string> searchedList, string searchedWord);
int factorial(unsigned long long n);

int main() {

    cout << "How many terms do you like to add? ";
    int dec1;
    cin >> dec1;

    cout << '\n' << "Would you like to compare all the values of e up to that point? ";
    string dec2;
    cin >> dec2;

    cout << '\n' << "To what precision do you want to know the values? ";
    int dec3;
    cin >> dec3;


    list<string> yesList = {"Yes", "yes","Yeah","yeah","Yea","yea"
    ,"Ye","ye"}; 

    long double total1 = 0;

    int found = finder(yesList, dec2);

    if(found == 1) {
        
        for (int k = 0; k <= dec1-1; ++k) {
            total1 += 1.0L / factorial(k);
            cout << '\n' << "For " << k+1 << " terms added: " << setprecision(dec3) << total1;
        }
    };
    
    if(found == 0) {
        for (int j = 0; j <= dec1-1; ++j) {
            total1 += 1.0L / factorial(j);
        }
    cout << '\n' << "For " << dec1 << " terms added: " << setprecision(dec3) << total1;
    };
}

int finder(list<string> searchedList, string searchedWord) {
    int result = 0;

    for(string comparer : searchedList) {
        if(searchedWord == comparer){
            result = 1;
        }
        else{

        };
    };

    return result;
}

int factorial(unsigned long long n) {
    unsigned long long subtotal = 1;
    
    for(int i = 1; i <= n; ++i) {
        subtotal *= i;
    };

    return subtotal;
}