#include<bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;
    while(t--)
    {

    int common=0;
    bool is = false;
    string s, t;
    cin >> s;
    cin >> t;
    int a = s.size() > t.size()? s.size(): t.size()  ;

    for (int i = 0; i < a;i++)
    {
        if(s[i]==t[i])
        {
            common+=1;
            is = true;
        }
        else{
            break;
        }
        
    }
    int tcountleft= t.substr(common, t.size()).size();
    int scountleft= s.substr(common, s.size()).size();

    is? cout << common + 1 + tcountleft + scountleft << endl : cout << common + tcountleft + scountleft << endl;
    }
}