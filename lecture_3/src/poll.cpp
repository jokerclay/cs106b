#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

// 1.  what happens to 'word' ?
void pollOne() {
    string word = "hello";
    word[1] = 'a';
    cout << word << endl;
}

// 2. which of A B an/or C is  valid ?
void pollTwo() {
    char letter = '!';
    string word = "hi";
    string letterStr = "!";

    // A 
    cout << " --------- A ----------" << endl;
    cout << typeid(letter).name() << endl;
    word += letter; 
    cout << word << endl;
    cout << typeid(word).name() << endl;

    // B 
    cout << " --------- B ----------" << endl;
    cout << typeid(letter).name() << endl;
    word = word + letter; 
    cout << word << endl;
    cout << typeid(word).name() << endl;

    // C 
    cout << " --------- C ----------" << endl;
    cout << typeid(letterStr).name() << endl;
    word = word + letterStr; 
    cout << word << endl;
    cout << typeid(word).name() << endl;
}

// 比较两个字符串，会只比较 第一个 character, 按字母表的顺序，
// 靠后的比较大
void pollThree() {
    string abc = "abc";
    string bc = "bc";
    if (abc < bc) {
        cout << "abc < bc" << endl;
    }else if (abc > bc) {
        cout << "abc > bc" << endl;
    }
}


void pollFour() {
    string abcUpper = "Abc";
    string abcLower = "abc";
    if (abcUpper < abcLower) {
        cout << "abcUpper < abcLower" << endl;
    }else if (abcUpper < abcLower) {
        cout << "abcUpper > abcLower" << endl;
    }
}

// 遍历字符串
// 使用 for 
void loopingOverStrFor(string word) {
    for (int letterIndex = 0; letterIndex < word.length(); letterIndex++ ) {
        cout << letterIndex << "-" << word[letterIndex] << endl;
    }
}

// 使用 for each
void loopingOverStrForEach(string word) {
    for (char letter : word) {
        cout << letter << endl;
    }
}
// 字母表的顺序
void alphabetLoop() {
    for (char letter = 'a'; letter <= 'z'; letter++ ) {
        cout << letter << " ";
    }
    cout << endl;
}


int main() {
//    pollOne();
//    pollTwo();
//    pollThree();
//    pollFour();

//   loopingOverStrFor("CLAY LIU");
//   loopingOverStrForEach("CLAY LIU");
    alphabetLoop();
    return 0;
}

