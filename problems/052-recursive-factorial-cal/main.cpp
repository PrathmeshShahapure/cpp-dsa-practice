#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int recursionFactorial(int n) {
        if(n==0) return 1;
        return n*recursionFactorial(n-1);
        
        
    }
};
int main () {
    solution obj;
    int n;  
    cout<<"Enter a number: ";
    cin>>n; 
    cout<<"Factorial of "<<n<<" is "<<obj.recursionFactorial(n)<<endl;
    return 0;
}