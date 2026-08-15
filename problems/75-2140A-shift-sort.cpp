#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n, count_ones = 0;
    string st,unsorted;

    cin >> n >> st;
    unsorted = st;

    sort(st.begin(), st.end());

    for (int i = 0; i < n; i++)
    {
        if(st[i]=='1' && unsorted[i]!='1')
        {
            count_ones++;
        }
    }
    cout << count_ones << endl;
}
}