#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<long long> factorialSequence(int n) { 
        if(n==1) return {1};
        vector<long long>  v =factorialSequence(n-1);
        long long next =v.back()*n;
        v.push_back(next);
        return v;
         
        
    }
};
int main () {
    solution obj;
    int n;  
    cout<<"Enter a number: ";
    cin>>n; 
    vector<long long> result = obj.factorialSequence(n);
    cout<<"Factorial sequence up to "<<n<<" is: ";
    for(auto val : result) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}