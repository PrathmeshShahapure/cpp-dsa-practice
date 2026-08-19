#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        int n ,begin_zero,end_zero;
        cin >> s;
        n = s.size();

        int zero_count = 0;
        zero_count = count(s.begin(), s.end(), '0');
    
        if(zero_count==0)
        {
            cout << 0 << "\n";
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0')
            {
                begin_zero = i;
                break;
               }
        }
        for (int i = n-1; i >=0; i--)
        {
            if(s[i]=='0'){
                end_zero = i;
                break;
            }
        }
        if(end_zero-begin_zero +1 ==zero_count)
        {
            cout << 1 << endl;
        }
        else
            cout << 2 << endl;
    }
}