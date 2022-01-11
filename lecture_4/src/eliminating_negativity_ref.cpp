/* *
 * Eliminating Negativity
 * Consider the following task:
 * Given a vector of integers, write a function that eliminates negativity from
 * the vector by changing the sign of all nagative value turn them into their
 * positive equivalents
 *
 * */

#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v) {
    for (int el : v) {
            cout << el << " ";
    }
    cout << endl;
}

void changeSign(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 0 ) {
            v[i] = -v[i];
        }
    }
}
int main() {

    vector<int> v = {1, 56, -26, 18, 99, -3, 0, 10};

    cout << "------------- before -------------" << endl;
    printVector(v);

    changeSign(v);

    cout << "------------- after -------------" << endl;
    printVector(v);

    return 0;
}
