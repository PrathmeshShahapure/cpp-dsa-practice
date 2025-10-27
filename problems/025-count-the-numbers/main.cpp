// Count the Number of Digits
// You are given an integer N. Your task is to calculate and return the number of digits of the given
// integer N
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int countDigits(int n){
        
        int a =0;
        while(n!=0)
        {
          a++;
          n=n/10;
        }
        return a;
        
    }
};