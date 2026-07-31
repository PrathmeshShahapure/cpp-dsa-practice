#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    vector <int> v;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    for (int i = 0; i < n; i++)
    {
        int sm = 10, n = v[i];

        while(n!=0)
        {
            int digit = n % 10;
            if(digit<sm)
            {
                sm = digit;
            }
            n = n/10;
        }
        cout << sm << endl;
    }
    
    return 0;
}