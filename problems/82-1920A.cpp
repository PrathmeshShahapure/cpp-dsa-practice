#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int start_with = 0, end_with = 1e9, included = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a, k;
            cin >> a >> k;
            if (a == 1)
            {
                start_with = max(k, start_with);
            }
            else if (a == 2)
            {
                end_with = min(k, end_with);
            }
            else{
            v.push_back(k);
           
        }
    }

    for (int i = 0; i < v.size();i++)
    {
         if (v[i] >= start_with && v[i] <= end_with)
            {
                included++;
            }
    }

        int left = end_with - start_with;

    left=left - included +1;
   
    if(left<0)
{
    left = 0;
}
    cout << left << "\n";
}
}