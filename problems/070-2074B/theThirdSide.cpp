#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        long long sum=0;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        cout << sum - a + 1 << '\n';
       
    }
}