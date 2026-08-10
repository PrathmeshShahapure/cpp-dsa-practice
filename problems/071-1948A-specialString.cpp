#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--)
    {

        int n, half;
        cin >> n;
        half = n / 2;
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            string st = "";
            for (int i = 65; i < 65 + half; i++)
            {
                char s = static_cast<char>(i);
                st += s;
                st += s;
            }
            cout << st<<endl;
        }
}
}
