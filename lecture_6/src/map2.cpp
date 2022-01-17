#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;


void do_insert(std::map<std::string,int> &m, const std::string &key, int value) {

// 比较复杂的写法
#if 0
    std::pair<std::string, int> p;
    p.first = key;
    p.second = value;

    std::pair<std::map<std::string,int>::iterator, bool> r;

    r = m.insert(p);

#endif 

// 较简单的写法
#if 0
    auto p = std::make_pair(key,value);
    auto r = m.insert(p);
#endif 


// 简单的写法
#if 1
    auto r = m.insert({key,value});
#endif 
    cout << std::setw(10) << key << std::right <<" = " << r.second << endl;
}


int main() {
    // map is a collection of key value pair
    std::map<std::string, int> m;


    // insert elements in random 'value order' .
    // like std::set.insert(), the std::map.insert returns a pair

    do_insert(m,"peach",9);
    do_insert(m,"apple",3);
    do_insert(m,"pear",5);
    do_insert(m,"bannan",1);
    do_insert(m,"buleberry",6);
    do_insert(m,"cherry",4);
    do_insert(m,"lime",5);
    do_insert(m,"plum",7);
    
    // can  have duplicate VALUES 
    do_insert(m,"graprfruit",5);

    // can not have duplicate KEYS 
    do_insert(m,"buleberry",456);


    // print the contents of the container 
    cout << endl;
    cout << "**** The map have " << m.size() << " elements" <<endl;
    cout << endl;

    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " = " << it->second << endl;
    }

    return 0;

}
