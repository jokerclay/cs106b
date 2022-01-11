#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
    }
    cout << endl;
}

void printVector2(vector<int> v) {
    for (int el : v) {
            cout << el << " ";
    }
    cout << endl;
}
int main() {
    vector<int> v1 = {1,2,3};
    printVector(v1);
    cout << v1[1] << endl;
    printVector2(v1);

    return 0;
}
