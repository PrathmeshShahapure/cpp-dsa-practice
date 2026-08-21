#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--)
    {

    int n,dot_count=0;
    string s;
    bool got2cn=false;
    cin >> n;
    cin >> s;

    dot_count = count(s.begin(), s.end(), '.');


    for (int i = 0; i < n-2;i++)
    { 
      if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
      {
          got2cn = true;
      }
    }
    if(got2cn)
        cout << "2\n";
    else
        cout << dot_count << "\n";
}
}