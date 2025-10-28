// Given an integer num that may contain repeating digits.
//  Return the second largest digit in the number.
// If there is no second largest digit, return -1
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int secondLargestDigit(int num) {
      int large =-1;
      set <int > setbro;
      setbro.insert(large);
        while(num!=0)
        { int n=num%10;
          setbro.insert(n);
          num=num/10;
        }
       vector <int> v(setbro.begin(),setbro.end());
     
      if( v.size() >=2)
      {
         return *(v.end()-2 ); 
      }
      else{
      
          return -1 ;
      }
      
        
    };

};
int main()
{
    solution obj;
    int num;
    cin>>num;
    cout<<obj.secondLargestDigit(num);
    return 0;
}