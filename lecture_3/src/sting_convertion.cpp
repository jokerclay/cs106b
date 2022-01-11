#include <iostream>
#include <string>

using namespace std;

int main() {

    string hi= "hi";
    char question = '?';

    // 将 C string convert into C++ string
    hi = string(hi);
    string hiThere = hi + question;
    cout << hiThere << endl;

    cout << " ------------------------ " << endl;


    string hello = "hello";
    string question2 = "?";

    // before
    string helloThere = hello + question2;
    cout << helloThere << endl;
    // return a C string from C++ string
    // after
    question2 = question2.c_str();
    cout << helloThere << endl;

    return 0;
}


