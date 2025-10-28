#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int countRepeatingDigits(int num) {
       set <int > ll;
           while(num!=0)
           { int  last_digit = num %10;
             int rest_of_digits= num/10;
             while(rest_of_digits!=0)
             {
                 int last = rest_of_digits%10;
                 if(last == last_digit)
                 {
                     ll.insert(last);
                 }
                 rest_of_digits=rest_of_digits/10;
             }
               num=num/10;
           }
     return ll.size();
        
        
    }

};
int main()
{
    solution obj;
    int num;
    cin>>num;
    cout<<obj.countRepeatingDigits(num);
    return 0;
}