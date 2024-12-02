#include <iostream>
#include <list>
#include <string>
using namespace std;

int finder(list<string> searched, string thing);

int main() {

    list<string> words = {"valkoinen", "vihrea"};
    cout << finder(words, "sinivalkoinen");

    if(finder(words,"sinivalkoinen") == 1){
        cout << "Yippie";
    }
}

int finder(list<string> searched, string thing) {
    int result = 0;

    for(string sana : searched) {
        if(sana == thing){
            result = 1;
        }
    };

    return result;
}