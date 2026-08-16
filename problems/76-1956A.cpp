#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int kn, qn;
    vector<int> kv,qv;

    cin >> kn >> qn;
    
    for (int i = 0; i < kn; i++)
    {
        int num;
        cin >> num;
        kv.push_back(num);
       
    }

    int lowest_k = kv[0];
    
    
    for (int i = 0; i < qn ;i++)
    {
        int num;
        cin >> num;
       if(num<lowest_k)
       {
           qv.push_back( num);
       }
       else {
           qv.push_back(lowest_k - 1);
       }
    }
    for (int i = 0; i < qn ;i++)
    {
        cout << qv[i] << " ";
    }
    cout<<endl;
}
}