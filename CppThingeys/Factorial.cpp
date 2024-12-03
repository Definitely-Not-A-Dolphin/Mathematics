#include <iostream>
using namespace std;

unsigned long long factorial(int n);

int main() {
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << endl << factorial(n) << endl;
    
}

unsigned long long factorial(int n){

    unsigned long long total = 1;

    for(int i = 1; i <= n; i++){
        total *= i;
    }

    return total;
}
