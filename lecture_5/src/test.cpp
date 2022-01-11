#include <iostream>
#include <vector>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector;

void PrintVec(vector<string> &vec)
{
    for (const auto &item : vec) {
        cout << item << "; ";
    }
    cout << endl;
}

int main() {
    vector<string> str_vec = {"array", "vector",
                              "deque", "list",
                              "set", "map",
                              "stack", "queue",
                              "multimap", "span"};
    PrintVec(str_vec);

    // DELETE element "set"
    auto elem_to_remove = str_vec.begin();
    if (elem_to_remove != str_vec.end()) {
        str_vec.erase(elem_to_remove);
    }

    PrintVec(str_vec);
    return EXIT_SUCCESS;
}
