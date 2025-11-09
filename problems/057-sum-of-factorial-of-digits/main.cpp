#include <bits/stdc++.h>
using namespace std;
class Solution {
 public : 
 
 int calFact(int n)
 {
    if(n==1 || n==0) return 1;
     
      return n* calFact(n-1);
 }
 int sumoffactorialofDigits(int num)
 {      
    if(num==0)
    {
        return 0;
    }         
    return  sumoffactorialofDigits(num/10) +calFact(num%10);
 }

};

int main () {
    Solution  sol;
    cout << sol.sumoffactorialofDigits(123);
}
