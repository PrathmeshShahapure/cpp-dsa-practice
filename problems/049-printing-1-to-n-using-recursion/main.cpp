#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void print1toNInAscendingOrder(int N){
        if(N==0)return;
        print1toNInAscendingOrder( N-1);
         cout<<N<<endl;
         
    }
};
int main() {
    solution sol;
    int n;
    cin>>n;
    sol.print1toNInAscendingOrder(n);
    return 0;   
}