#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
    int n;
    string str="",numstr;
    cin >> n;
    cin >> numstr;
  
    for (int i = 0; i < n; i++)
    {
        string num = numstr;
        if(num[i]=='0')
        {
            num[i] = '1';
        }
        else{
            num[i] = '0';
        }
        str += num;
    }

    int count = 0;
    for (auto a:str)
    {
        if(a=='1')
        {
            count++;
        }
    }
    cout << count<<endl;
    }
}