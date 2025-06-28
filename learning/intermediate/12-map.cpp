#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
        MAP

        key <--> value

        MAPs stores unique keys in stored order

        - KEYs are unique
        - KEYs can be any data type
        - values can be any data type
    */

    map<int, string> m;
    m[1] = "Hello";
    m.insert({2, "Bye"});
    m.emplace(3, "World");

    for(auto i : m){
        cout << i.first << '\t' << i.second << '\n';
    }

    cout << m[1] << " " << m[666] << '\n';

    auto k = m.find(1);
    cout << k->first << " " << k->second;

    auto it = m.find(666); // gives m.end() location as not found


    return 0;
}

/*
    MULTI-MAP

    - store duplicate keys
    - sorted

*/

/*
    UNORDERED MAP

    - not sorted
    - unique keys
*/