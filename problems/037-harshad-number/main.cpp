// A number is said to be Harshad if it is divisible by the sum of its digits.
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkHarshadNumber(int num) {
       
        int ori =num;
        int sum=0;
        while(ori!=0)
        { int n = ori%10;
            sum+=n;
            ori=ori/10;
        }
        if(num%sum==0)
        {
            return true;
        }
        else {
            return false;
        }
        
        
    }

};
int main()
{
    solution obj;
    int num;
    cin>>num;
    if(obj.checkHarshadNumber(num))
    {
        cout<<"Harshad Number";
    }
    else
    {
        cout<<"Not a Harshad Number";
    }
    return 0;
}