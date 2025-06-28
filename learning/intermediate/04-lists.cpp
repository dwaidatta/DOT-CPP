#include <bits/stdc++.h>
using namespace std;

int main(){
    // insert function is very time costly

    list<int> l1;
    l1.push_back(2); // {2}
    l1.emplace_back(4); // {2, 4}

    l1.push_front(3); // {3,2,4}
    l1.emplace_front(1); // {1,3,2,4}

    return 0;
}