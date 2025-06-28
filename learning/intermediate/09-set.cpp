/*
    SET

    - sorted
    - only unique elements stay

    - ** check lowerbound and upperbound functions **
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(2);

    // s -> 1, 2, 4

    auto it = s.find(2); // it -> mempry address
    // if element NOT found -> it -> s.end()

    s.erase(1); // element
    // s.erase(iterator) -> removes ele in iterator place (mem address)

    // s.count(ele) -> outputs 0 and 1 only

    // EVERYTHING HAPPENS IN LOGARITHMIC TIME COMPLEXITY

    return 0;
}
