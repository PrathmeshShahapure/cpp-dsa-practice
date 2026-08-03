#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int m;
    cin >> m;
    vector <string> t;

    for (int i = 0; i < m; i++)
    {
        int n;
         cin >> n;
        if (n % 3 == 0)
        {
            t.push_back("Second");
        }
        else if (n % 3 == 1)
        {
            t.push_back("First");
        }
        else if (n % 3 == 2)
        {
             t.push_back("First");
        }
}

for (auto i:t)
{
    cout << i<<endl;
}
}