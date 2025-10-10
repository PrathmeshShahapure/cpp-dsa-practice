#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthAfterConcat(int n, string arr[]) {
        string concat = "";

        for (int i = 0; i < n; i++) {
            concat += arr[i];
        }
        return concat.length();
    }
};

int main() {
    Solution s;

    int n=0;
    cout <<"Enter the number of strings ";
    cin >>n;

    string arr[n];
    for (int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    
    cout << "Total length: " << s.lengthAfterConcat(n, arr);
    return 0;
}
