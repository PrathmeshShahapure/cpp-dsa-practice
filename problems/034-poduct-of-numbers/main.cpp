#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int ProductOfDigits(int num) {
        int total=1;
        while(num!=0)
        {
            total=total*(num%10);
            num=num/10;
        }
        return total;
    }

};
int main()
{
    solution obj;
    int num;
    cin>>num;
    cout<<obj.ProductOfDigits(num);
    return 0;
}