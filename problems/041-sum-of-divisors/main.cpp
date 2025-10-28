// Given an integer
// num
// Return the sum of all divisors of the number (including the number itself).

#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int sumOfDivisors(int num) {
        if(num==1) return 1;
        int sum=0;
      for(int i=2;i*i<=num;i++)
      {
          if(num%i==0)
          {
              sum+=i;
              int divisor = num/i;
              if(i != divisor){
                  sum+=divisor;
          }}
      }
      
          sum+=num;
         
        return sum+1;
    }

};
int main()
{
    solution obj;
    int num;
    cin>>num;
    cout<<obj.sumOfDivisors(num);
    return 0;
}