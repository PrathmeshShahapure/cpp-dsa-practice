#include<bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;
    while(t--)
{    int n;
    string s,decr="";

    cin >> n;
    cin >> s;
   

    for (int i = 0; i < n-1;i++)
    {
        for(int j = i; j < n-1;j++)
           if(s[i]==s[j+1])
        {
            decr += s[i];
            i = j+1;
            break;
        }
    }
    cout << decr<<endl;
}
}