#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.second == p2.second) return (p1.first >= p2.first);

}

int main() {

    /*
        SORT

        start, end -> memory address

        sort(start, end); // [start, end]
        sort(start, end, greater<int>()); // descending order

    */

    vector<int> v = {1, 3, 21, 2, 5};
    sort(v.begin(), v.end(), greater<int>());

    for(auto ele : v){
        cout << ele << " ";
    }
    cout << '\n';

    pair<int,int> arr[] = {{1, 3}, {6, 3}, {9, 2}, {3, 4}, {1, 2}, {1, 3},
                                 {2, 5}, {6, 4}, {6, 3}, {9, 5}};

    // want to sort according to the second element
    // if second element is same then sort first element but in descending

    sort(begin(arr), end(arr), comp);

    for (auto ele : arr){
        cout << "(" << ele.first << ", " << ele.second << ") ";
    }



    return 0;
}