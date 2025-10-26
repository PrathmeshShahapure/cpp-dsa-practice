// You are given a array of pairs arr where each pair contains two integers.
// Your task is to sorts the pairs first by the first element in ascending order.
// If the first elements are equal, the pairs should be sorted by the second element
// in descending order.
// Additionally, calculate and print the popcount of a given number x 
//The popcount of a number is defined as the number of set bits (1's) in
// its binary representation.

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void sortPairs(vector<pair<int, int>>& arr) {
    
       sort(arr.begin(),arr.end(), [](pair<int,int> a ,pair<int,int> b)
       {
           if(a.first == b.first)
            {
                return a.second>b.second;
            }
         else {
                return a.first<b.first;
         }
       });
    }

    int popcount(long long x) {
        return __builtin_popcountll(x);
    }
};
int main() {
    solution sol;
    vector<pair<int, int>> arr = {{3, 4}, {1, 2}, {3, 2}, {1, 5}, {2, 3}};
    
    sol.sortPairs(arr);
    
    cout << "Sorted pairs:\n";
    for (const auto& p : arr) {
        cout << "(" << p.first << ", " << p.second << ")\n";
    }
    
    long long x = 29;
    cout << "Popcount of " << x << " is: " << sol.popcount(x) << "\n";
    
    return 0;
}