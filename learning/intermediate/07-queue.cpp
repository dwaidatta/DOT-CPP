#include <bits/stdc++.h>
using namespace std;

int main() {

    /*
        QUEUE -> FIFO (first in, first out)
    */

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    q.emplace(4);

    q.back();
    q.front();
    q.pop();
}