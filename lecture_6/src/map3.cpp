#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using std::cout;
using std::endl;


void do_insert(std::map<std::string, int> &m, const std::string &key, int value) {
    // insert  a KEY VALUE PAIR 
     auto r = m.insert({key,value});

     // see if the value are inserted 
     cout << std::setw(10)<< key << std::right << " = " << r.second << endl;

}

void do_erase(std::map<std::string, int> &m, const std::string &key ) {
    // we can erase by KEY range, etc
     auto num = m.erase(key);

     // see if the value are erased 
     cout << std::setw(10)<< key << std::right << " = " << num << endl;

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
    
    cout << endl;
    cout << "*****************************" <<endl;
    cout << "     inserting  elements     " <<endl;
    cout << "*****************************" <<endl;
    cout << endl;


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


    cout << endl;
    cout << "*****************************" <<endl;
    cout << "     removing    elements     " <<endl;
    cout << "*****************************" <<endl;
    cout << endl;

    do_erase(m,"graprfruit");
    do_erase(m,"xyz");          // if we erase some not there
    
    // print the contents of the container 
    cout << endl;
    cout << "**** The map have " << m.size() << " elements" <<endl;
    cout << endl;

    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " = " << it->second << endl;
    }

    cout << endl;
    cout << "*****************************" <<endl;
    cout << "     finding    elements     " <<endl;
    cout << "*****************************" <<endl;
    cout << endl;

    auto it = m.find("cherry");
    if (it != m.end()) {
        cout << "find it ! value = " << it->second << endl;
    } else {
        cout << "did not find it " << endl;
    }

    cout << endl;

    cout << "*****finding    xyz     " <<endl;
    it = m.find("xyz");
    if (it != m.end()) {
        cout << "find it ! value = " << it->second << endl;
    } else {
        cout << "did not find it " << endl;
    }

    cout << endl;
    cout << "*****************************" <<endl;
    cout << "     printing  from lime     " <<endl;
    cout << "*****************************" <<endl;
    cout << endl;

    // print the contents from lime
    for (auto it = m.lower_bound("lime"); it != m.end(); it++) {
        cout << it->first <<" = " << it->second << endl;
    }

    cout << "*****printing start xyz     " <<endl;
    // print the contents starting xyz (xyz is not  in the map)
    for (auto it = m.lower_bound("xyz"); it != m.end(); it++) {
        cout << it->first <<" = " << it->second << endl;
    }


    cout << "*****printing start mmmmmmm     " <<endl;
    // print the contents starting xyz (xyz is not  in the map)
    for (auto it = m.lower_bound("mmmmmmm"); it != m.end(); it++) {
        cout << it->first <<" = " << it->second << endl;
    }

    return 0;

}
