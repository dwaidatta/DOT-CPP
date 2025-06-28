#include <bits/stdc++.h>
using namespace std;

int main() {

    /*
        PRIORITY QUEUE

        -> the largest value stays at the top
    */

    priority_queue<int> pq; // Maximum Heap

    pq.push(2); // 2
    pq.push(4); // 4, 2
    pq.push(5); // 5, 4, 2
    pq.push(3); // 5, 4, 3, 2

    pq.emplace(10); // 10,5,4,3,2

    pq.pop(); // pq -> 5,4,3,2

    // -----------------------

    priority_queue<int, vector<int>, greater<int>> pq_min; // Minimum Heap
    pq_min.push(2); // 2
    pq_min.push(4); // 2, 4
    pq_min.push(1); // 1, 2, 4

    // also emplace and pop

    return 0;
}