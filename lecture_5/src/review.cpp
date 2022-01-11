#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> saki(vector<int> v) {
    while(v.size() > 0) {
        v.erase(v.begin()+0);
    }
    return v;
}
void buster(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        v[i] = -1 * v[i];
    }
}

void lola(vector<int> a, vector<int>& b) {
    vector<int> temp = a;
    a = b;
    b = temp;
    b.push_back(18);
}
void printVector(vector<int> &v) {
    for (int i = 0; i < v.size(); i++ ) {
        cout << v[i] << " ";
    }
    cout << endl;

}

int main() {
    vector<int> a = {1,0,6};
    vector<int> b = {-5,4,-1,7};

    saki(a);
    // what the contents of a and b in this point  in the code ?
    // a: {1,0,6}     pass by val, the value in main 'a' will not change.
    // b: {-5,4,-1,7}
    printVector(a);
    printVector(b);

    buster(b);
    // what the contents of a and b in this point  in the code ?
    // a:{1,0,6}
    // b: {5,-4,1,-7}   pass by reference, change the acctual 'b' in main
    printVector(a);
    printVector(b);

    lola(a,b);
    // what the contents of a and b in this point  in the code ?
    // a: {1,0,6}
    // b: {5,-4,1,-7,18}
    printVector(a);
    printVector(b);

    return 0;
}
