#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 7;
    int cnt = __builtin_popcount(num);

    cout << cnt << '\n';

    /*
        num=7 -> 111 -> 3
        num=1 -> 10 -> 1
    */

    long long num2 = 1123252453423;
    cnt = __builtin_popcount(num2);

    cout << cnt << '\n';

    // ----------------------

    // permutations

    string s = "123";

    sort(s.begin(), s.end()); // always good to SORT ascending to get all possible permutations
    // s = "231" as starting will NOT return all permutations
    
    int count = 0;

    do {
        cout << s << endl;
        count++;
    } while(next_permutation(s.begin(), s.end()));

    cout << "Total permutations: " << count << '\n';

    vector<int> v = {1,2,43,53,21,24,5,2,1,24,2};

    auto maxele = *max_element(v.begin(), v.end());
    auto i_maxele = max_element(v.begin(), v.end());
    auto minele = *min_element(v.begin(), v.end());
    auto i_minele = min_element(v.begin(), v.end());

    cout << maxele << " " << distance(v.begin(), i_maxele) << " " << *(i_maxele) << endl;
    cout << minele << " " << distance(v.begin(), i_minele) << " " << *(i_minele) << endl;

    return 0;
}