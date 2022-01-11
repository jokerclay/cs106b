/* *
 * write a program  contdown from 10 to 1 
 * and then print liftoff
 *
 * */

#include <iostream>
using namespace std;

void countDown(int from, int to) {
    for (int i = from; i > to - 1; i--) {
        cout << i << " "; 
    }
    cout << endl;
}

int main() {
    countDown(10,1);
    cout << "liftoff" << endl;

    return 0;
}
