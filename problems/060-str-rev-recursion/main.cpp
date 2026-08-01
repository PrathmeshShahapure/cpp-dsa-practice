#include <bits/stdc++.h>
using namespace std;

class solution{
 bool helper(string s,int l,int i)
    {  
        if(i>=l/2)
        {
            return true;
        }
     else {
         if(s[i]!=s[l-i-1])
         {
             return false;
         }
        return helper(s,l,i+1);
     }
    }
public:
    bool checkPalindrome(string s){
        //Write your code here...
        int l,i=0;
        l=s.size();
         
        return helper(s,l,i);
    }
};