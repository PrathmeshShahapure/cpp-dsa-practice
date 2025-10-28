#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkEvenDigits(int num) {
        bool tka= true;
        while(num!=0)
        {
            int a= num%10;
            if(a%2!=0)
            {
                tka=false;
            }
            num=num/10;
        }
        return tka;
    }

};
int main()
{
    solution obj;
    int num;
    cin>>num;
    if(obj.checkEvenDigits(num))
    {
        cout<<"All digits are even";
    }
    else
    {
        cout<<"All digits are not even";
    }
    return 0;
}