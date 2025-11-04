// Double Factorial of a Number
// You're given a positive integer n and your task is to write a recursive function that calculates the double factorial of n
// The double factorial of n is the product of all integers from 1 up to n that have the same parity (either even or odd) as n
// If n is odd, multiply all the odd numbers from 1 to n
// If n is even, multiply all the even numbers from 2 to n

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int itsEven(int n)
    { if(n==2) return 2;
       int r = itsEven(n-1);
       if(n%2==0)
       {
           return n*r;
       }
       else {
           return r;
       }
          }
    int itsOdd(int n)
    {  if(n==1)return 1;
      int r = itsOdd(n-1);
      if(n%2 !=0)
      {
          return r*n;
      }
      else{
          return r;
      }
        
    }
    int doubleFactorial(int n) {
        if(n%2==0)
        {
          return   itsEven(n);
        }
        else {
          return  itsOdd(n);
        }
        
        
    }
};
int main () {
    solution obj;
    int n;  
    cout<<"Enter a number: ";
    cin>>n; 
    cout<<"Double Factorial of "<<n<<" is "<<obj.doubleFactorial(n)<<endl;
    return 0;
}