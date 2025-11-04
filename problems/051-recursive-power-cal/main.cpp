#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    double recursivePower(double a, int b) {
  
        if(b==1) return a;
      
         return a*recursivePower(a,b-1);
        
    }
};
int main (){
    solution sol;
    int b;
    double a;
    cout<<"Enter base and then power ";
    cin>>a>>b;
    cout<< sol.recursivePower(a, b);
    return 0;
}