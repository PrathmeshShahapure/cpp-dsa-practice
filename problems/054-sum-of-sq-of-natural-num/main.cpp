#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int recursiveSumOfSquares(int n) {
        if(n==1)return 1;
        return n*n + recursiveSumOfSquares(n-1) ;
        
        
    }
};
int main () {
    solution obj;
    int n;  
    cout<<"Enter a natural number: ";
    cin>>n; 
    cout<<"Sum of squares of first "<<n<<" natural numbers is "<<obj.recursiveSumOfSquares(n)<<endl;
    return 0;
}