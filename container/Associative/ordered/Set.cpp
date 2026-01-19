/*
Sets are a type of associative container in which each element has to be unique because the value of the element identifies it.
The values are stored in a specific sorted order i.e. either ascending or descending.

-It dont allow duplicates

syntax:
 set <data_type> set_name;

Functions used in this :
    -begin()
    -end()
    -size()
    -max-size()
    -empty()

Time complexity :
 Insertion of Elements – O(log N)
 Deletion of Elements – O(log N)

Different ways to initialize set :
SYNTAX:
 -set<int> s ; or called one by one using insert.
 -set<type> s = {v1, v2, v3, …}
 -set<int> s2(s1); With the help of copy constructor
*/
#include<iostream>
#include<set>
using namespace std;

int main(){

     set<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('T');
    for (auto& str : a) {
        cout << str << ' ';
    }
    cout << '\n';

     set<int> b;
    b.insert(100);
    b.insert(100);
    b.insert(900);
    b.insert(300);
    b.insert(300);
    for (auto& str : b) {
        cout << str << ' ';
    }
    cout << '\n';

    
}
/*
Real life example 
    -Social Media platform(username)
    -Finding unique words in document
    -Tracking IP address
    -Unique Lottery Number
*/