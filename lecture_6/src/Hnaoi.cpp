#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
}

void printAll(stack<int> source, stack<int> anuxiliary, stack<int> destination){
    cout << "--=== source ===-- " << endl;
    printStack(source);

    cout << "--=== anuxiliary ===-- " << endl;
    printStack(anuxiliary);

    cout << "--=== destination ===-- " << endl;
    printStack(destination);
    cout << endl;
    cout << endl;
}

int main() {

    stack<int> source, anuxiliary ,destination;
    source.push(3);
    source.push(2);
    source.push(1);
    printAll(source,anuxiliary,destination);

    // 1. move disk 1 to destination
    cout << "+------------------------------------------+" << endl;
    cout << "|      1. move disk 1 to destination       |" << endl;
    cout << "+------------------------------------------+" << endl;
    destination.push(source.top());
    source.pop();
    printAll(source,anuxiliary,destination);



    // 2. move disk 2 to anuxiliary
    cout << "+------------------------------------------+" << endl;
    cout << "|      2. move disk 2 to anuxiliary        |" << endl;
    cout << "+------------------------------------------+" << endl;
    anuxiliary.push(source.top());
    source.pop();
    printAll(source,anuxiliary,destination);

    // 3. move disk 1 to anuxiliary
    cout << "+------------------------------------------+" << endl;
    cout << "|      3. move disk 1 to anuxiliary        |" << endl;
    cout << "+------------------------------------------+" << endl;
    anuxiliary.push(destination.top());
    destination.pop();
    printAll(source,anuxiliary,destination);

    // 4. move disk 3 to destination
    cout << "+------------------------------------------+" << endl;
    cout << "|      4. move disk 3 to destination       |" << endl;
    cout << "+------------------------------------------+" << endl;
    destination.push(source.top());
    source.pop();
    printAll(source,anuxiliary,destination);
    
    // 5. move disk 1 to source
    cout << "+------------------------------------------+" << endl;
    cout << "|      5. move disk 1 to source       |" << endl;
    cout << "+------------------------------------------+" << endl;
    source.push(anuxiliary.top());
    anuxiliary.pop();
    printAll(source,anuxiliary,destination);

    // 6. move disk 2 to destination
    cout << "+------------------------------------------+" << endl;
    cout << "|      6. move disk 2 to destination       |" << endl;
    cout << "+------------------------------------------+" << endl;
    destination.push(anuxiliary.top());
    anuxiliary.pop();
    printAll(source,anuxiliary,destination);

    // 7. move disk 1 to destination
    cout << "+------------------------------------------+" << endl;
    cout << "|      7. move disk 1 to destination       |" << endl;
    cout << "+------------------------------------------+" << endl;
    destination.push(source.top());
    source.pop();
    printAll(source,anuxiliary,destination);






    return 0;
}

