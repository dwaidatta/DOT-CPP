// #include <bits/stdc++.h>
#include <iostream>

int main(){
    // Pairs

    std::pair<int, int> p1 = {1, 5};
    
    std::cout << p1.first << '\t' << p1.second << std::endl;

    std::pair<int, std::pair<int, int>> p2 = {1, {2, 5}};

    std::pair<int, int> arr[] = {{1,3}, {2, 6}, {4, 1}};

    std::cout << p2.second.first << std::endl;

    std::cout << arr[1].second << std::endl;

    return 0;

}