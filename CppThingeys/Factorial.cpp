#include <iostream>
using namespace std;

int main() {
    unsigned long long n = 2;
    unsigned long long subtotal = 1;
    
    for(int i = 1; i <= n; i++){
        subtotal *= i;
    }
  
    cout << subtotal;
}
