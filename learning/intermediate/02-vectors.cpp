#include <bits/stdc++.h>
using namespace std;

int main(){

    //  VECTORS
    //  very important

    // vectors are dynamic in nature
    // unlike arrays which are static

    vector<int> v1; // { }
    v1.push_back(2); // {2}
    v1.emplace_back(4); // {2, 4}

    vector<pair<int, int>> v2;
    v2.push_back({3, 4}); // {{3, 4}}
    v2.emplace_back(3,4); // {{3, 4}}

    vector<int> v3(5, 123); // {123, 123, 123, 123, 123}
    vector<int> v4(3); // {value, value, value}
    // value -> 0 or garbage value based on compiler

    vector<int> v5(v3); // v5 = copy of v3
    
    return 0;
}