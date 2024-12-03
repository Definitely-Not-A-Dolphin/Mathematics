#include <cmath>
#include <iostream>
#include <list>
#include <string>
using namespace std;

string primer(int n);

bool finder(list<string> searched, string thing);

int main(){

    int number;
    cout << "Enter a number: ";
    cin >> number;

    list<string> yesList = {"Yes", "yes","Yeah","yeah","Yea","yea"
    ,"Ye","ye"}; 

    string y;
    cout << endl << "Do you want to know all the numbers up to that point? ";
    cin >> y;

    if(finder(yesList, y)){
        for(int k=1; k <= number;++k){
            cout << endl << k << " is " << primer(k);
        }
    }
    else{
        cout << endl << number << " is " << primer(number);
    }

}

string primer(int n){
    int d = 1;

    for (int i = 1;i <= ceil((n+1)/2);++i){
        if(n%i == 0){
            d+=1;
        }
    };

    if(n == 1){
        return "Not Prime";
    }
    if(d == 2){
        return "Prime";
    }
    else{
        return "Composite";
    }
}

bool finder(list<string> searched, string thing) {
    bool result = false;

    for(string sana : searched) {
        if(sana == thing){
            result = true;
        }
    };

    return result;
}