// A number is said to be Automorphic if square of the number
//  ends in same digits as the number itself.
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkAutomorphicNumber(int num) {
      int ori = num ;
      bool t=true;
      int sq = pow(num,2);
      while(ori!=0)
      {  int n=ori%10;
         int sq_n = sq%10;
          if(sq_n==n)
          {
              ori=ori/10;
              sq= sq /10;
          }
          else {
            
             t=false; 
             break;
          }
      }
      
        return t;
        
    }

};
int main()
{
    solution obj;
    int num;
    cin>>num;
    if(obj.checkAutomorphicNumber(num))
    {
        cout<<"Automorphic Number";
    }
    else
    {
        cout<<"Not an Automorphic Number";
    }
    return 0;
}