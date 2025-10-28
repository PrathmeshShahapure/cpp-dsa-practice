#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkArmstrongNumber(int num) {
       string a = to_string(num);
       int ori=num;
      int s=a.size();
    //   cout<<typeid(s).name();
    //   cout<<typeid(a).name();
      int b = stoi(a);
       int total=0;
        while(num!=0)
        { 
         int n= num%10;
         total+=pow(n,s);
         num=num/10;
    }
    if(ori==total)
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
    if(obj.checkArmstrongNumber(num))
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not an Armstrong Number";
    }
    return 0;
}