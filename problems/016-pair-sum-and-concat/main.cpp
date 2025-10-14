#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void operate( vector<pair<int, string>> &pairs) {
       int total=0;
       string str="";
       for (auto it = pairs.begin();it !=pairs.end();it++)
       {
           total+=(*it).first;
           str+=it->second;
       }
        cout<<total<<endl;
        cout<<str<<endl;
        cout<<str.length();
    }
};
int main (){
    solution obj;
    vector<pair<int, string>> pairs;
    int n;
    cout<<"Enter the number of pairs you want to insert: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        string s;
        cin>>x>>s;
        pairs.push_back({x,s});
    }
    obj.operate(pairs);
    return 0;
}