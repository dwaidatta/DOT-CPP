#include <bits/stdc++.h>
using namespace std;

int main() {
    // MULTI-SET

    multiset<int> ms;

    ms.insert(1); // ms -> 1
    ms.insert(1); // ms -> 1,1
    ms.insert(1); // ms -> 1,1,1

    ms.erase(1); // erases all 1's

    ms.erase(ms.begin()); // ms.erase(location) -> erases only that location

    // ms.erase(start, stop); // [start, stop)
    
    return 0;
}