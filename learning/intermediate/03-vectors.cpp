#include <bits/stdc++.h>
using namespace std;

int main(){
    // ACCESSING ELEMENTS in VECTOR
    
    vector<int> v = {1, 2, 3, 4, 5};
    

    vector<int>::iterator it = v.begin(); // gets memory location
    cout << *(it) << " ";
    it++;

    /*
        v.begin() -> memory address of first element
        v.end() -> memory address just after last element
    */

    cout << v[0] << " " << v.at(0) << " ";
    cout << v.back() << " "; // gives last element

    cout << '\n';

    for(vector<int>::iterator k = v.begin(); k != v.end(); k++){
        cout << *(k) << " ";
    }
    cout << '\n';

    for(auto k = v.begin(); k != v.end(); k++){
        cout << *k << " ";
    }

    cout << '\n';

    for(auto ele : v){
        cout << ele << " ";
    }

    // VECTOR FUNCTIONS

    // v.erase(mem_address);
    /*
        v.erase(i, j);
        i -> starting memory address
        j -> ending memory address
        NOTE: j th memory address is not erased. Think [i, j)
    */

    /*
        INSERT FUNCTION

        v = {1,2,3,4,5}
        v.insert(location, optional -> times, element)
        v.insert(v.begin(), 333) -> {333, 1, 2, 3, 4, 5}
        
        v.insert(v.begin(), 2, 88) -> {88, 88, 1, 2, 3, 4, 5}
    */

    cout << '\n' << v.size() << '\n'; // size of vector

    /*
        v.pop_back(); // removes last element
        v1.swap(v2); // v1 <--> v2, vectors swap
        v.clear(); // erases entire vector

        v.empty(); // checks if empty
    */

    return 0;


}