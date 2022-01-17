#include <iostream>
#include <map>
#include <string>
using namespace std;

string countingSort(string s) {

    std::map<char,int> freqMap;

    // fill all the character into map freqMap
    for (char ch : s) {
        freqMap[ch] += 1;
    }

    // see all the elements in the map
    cout << "**** added into map from string ****" << endl;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // create the sortedString
    string sortedString;
    // loop over from a ~ z
    for (char ch = 'a'; ch <= 'z'; ch++) {

        auto it = freqMap.find(ch);     // assign the character to a iterator 
        if (it != freqMap.end()) {      // if the element is not the last one
            int numCopies = freqMap[ch];
            for (int i = 0; i < numCopies; i++) {
                sortedString.push_back(ch);
            }
        }
    }

    cout << endl;
    cout << "**** the sorted string  ****" << endl;
    return sortedString;
}


int main() {
    std::string s = "this is a test";

    cout << "**** the orginal string ****" << endl;
    cout << s << endl;
    cout << endl;

    cout << countingSort(s) << endl;
    return 0;
}
