#include<bits/stdc++.h>
using namespace std;
class solution {
  public:
    int gcd(int A, int b) 
  	{ 
  	    while(A!=0 && b!=0) 
  	   { 
  	    if(A>=b) A=A%b ;
  	     else b=b%A;
  	   }
  	   if(A==0)
  	   return b;
  	   else return A;
      	      
      }
};

int main(){
    solution S;
    int a,b;
    cin>>a>>b;
    cout<<S.gcd(a,b);
    return 0;
}