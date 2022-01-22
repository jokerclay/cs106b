/*

          reveese the  stirng

    "dog"           ----->      "god"
    "stressed"      ----->      "desserts"
    "recursion"     ----->      "noisrucer"
    "level"         ----->      "level"
    "a"             ----->      "a"

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;


void reverseStr(auto *s) {
    char tmep = s.front();
    s.push_back(tmep);
    s.erase(s.begin(),0);
    reverseStr(s);
}

int main () {
    vector<char> s;
    s.push_back('d');
    s.push_back('o');
    s.push_back('g');

    // print out the string
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    reverseStr(s);
    
    // print out the string
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    return 0;
}
