#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int add(int a, int b) {
        return a+b;
        
    }
    
    int subtract(int a, int b) {
        //Write your code here...
        return a-b;
    }
    
    int multiply(int a, int b) {
        //Write your code here...
        return a*b;
    }
    
    int divide(int a, int b) {
        //Write your code here...
        return a/b;
    }
};

int main (){
   
  int a,b;  

  cout<<"Enter first number ";
  cin>>  a;
  cout<<"Enter second number ";
  cin>>  b;

  solution s;
  cout<<s.add(a,b);
  cout<<s.subtract(a,b);
  cout<<s.multiply(a,b);
  cout<<s.divide(a,b);
 

}