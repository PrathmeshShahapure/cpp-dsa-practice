#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int sumOfDigits(int num) {
      while(num>=10)
      {  int sum=0;
          while(num !=0)
          {
              sum+=num%10;
              num=num/10;
          }
          num=sum;
      }
      return num;
}
};
int main()
{
    solution obj;
    int num;
    cin>>num;
    cout<<obj.sumOfDigits(num);
    return 0;
}