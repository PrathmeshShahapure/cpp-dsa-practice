#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int recursionSum(int N) {
        if(N==0)return 0;
        return N+recursionSum(N-1);
        
        
    }
};
int main () {
    solution obj;
    int N;  
    cout<<"Enter a natural number: ";
    cin>>N; 
    cout<<"Sum of first "<<N<<" natural numbers is "<<obj.recursionSum(N)<<endl;
    return 0;
}   