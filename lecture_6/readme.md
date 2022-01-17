# Unordered Data Structures: sets and maps

## Activity: towersOfHanoi()

## Towers of Hanoi
* Setup:
    * Three "towes"
    * N disk of descreasing sizes(below: N = 3)
* Goal: move the disk stack from the first peg to the last peg.
* Rules:
    * can only move one disk at a time 
    * you can not place a larger disk on top of a smaller disk



    |                   |                   |
    |                   |                   |
    _                   |                   |
   _|_                  |                   |
  _ _ _                 |                   |
|___|____|          |___|____|          |___|____|
source              anuxiliary          destination


* pesedocode:
1. move disk 1 to destination
2. move disk 2 to anuxiliary
3. move disk 1 to anuxiliary
4. move disk 3 to destination
5. move disk 1 to source
6. move disk 2 to destination
7. move disk 1 to destination

```C++
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

```

##examples of unordered data
* Unique visitors to a website
* Shuffled playlist with no  duplicate songs 
* People and their passport numbers on a particular flight
* A recipe with ingredients and their quantities
* Products placed into categories in an online strorefront 



# set
##what is a set ?
* a set collection of elements with no duplicates.
* sets are faster than ordered data structure like vector, since there are no
  duplicates,it's faster for them to find things 
* sets don't have indices !
* see more about `set` <a href="https://www.cplusplus.com/reference/set/set/">set </a>


## set methods
* set have (at least) the following operations (and they are fast)
    * add(value) add value to set, ignores if the set already contains the value
    * contains(value) return `ture` if the set contain the value, otherwise return `false`.
    * remove(value) : return the value form the set , does nothing if the value is not in the set
    * size(): return the number of elements in the set.  
    * isEmpty(): return `ture` if the sets is empty, false otherwise.























