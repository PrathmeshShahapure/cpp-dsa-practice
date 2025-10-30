#include<bits/stdc++.h>
using namespace std;
// For any two numbers a and b:
// lcm least comman multiple : a*b/gcd(a,b);

class solution {
public:
    int lcm(int a, int b) {
        int temp,mul=a*b;
      while(b!=0)
      {
          temp=b;
          b=a%b;
          a=temp;
      }
        
    int ans =mul/a;
    return ans;
    }

};
int main (){
    solution S;
    int a,b;
    cin>>a>>b;
    cout<<S.lcm(a,b);
    return 0;
}