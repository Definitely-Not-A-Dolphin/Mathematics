#include <iostream>
#include <list>
#include <string>
using namespace std;

bool finder(list<string> searched, string thing);

int main() {

    list<string> words = {"valkoinen", "vihrea"};
    cout << finder(words, "sinivalkoinen");

    if(finder(words,"sinivalkoinen")){
        cout << "Yippie";
    }
}

bool finder(list<string> searched, string thing) {
    int result = false;

    for(string sana : searched) {
        if(sana == thing){
            result = true;
        }
    };

    return result;
}