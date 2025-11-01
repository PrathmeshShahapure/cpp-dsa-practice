#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void print1toNInDescendingOrder(int N) {
        if(N==0) return ;
        cout<<N<<endl;
        print1toNInDescendingOrder(N-1);
        
    }
};

int main()
{  int n;
   solution  sol;
   cout<<"Enter the number ";
   cin >>n;
   sol.print1toNInDescendingOrder(n);
   return 0;

}