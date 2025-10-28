#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkPerfectNumber(int num) {
       
        int sum=0;
        for(int i=1;i*i <= num ;i++)
        {
          if(num%i==0)
          { int d= num/i;
             sum+=i;
              if(i!=d )
              {
                  sum+=d;
               
              }
             
          }
        }
        // cout<<sum;
        sum=sum-num;
        if(num==sum) return true;
        return false;
    
        
    }

};
int main()
{
    solution obj;
    int num;
    cin>>num;
    if(obj.checkPerfectNumber(num))
    {
        cout<<"Perfect Number";
    }
    else
    {
        cout<<"Not a Perfect Number";
    }
    return 0;
}