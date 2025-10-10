#include <bits/stdc++.h>
using namespace std;

class solution{
public:

    void table(int n){
       for (int i=1 ; i<11;i++)
       {
           cout<<n<<" x "<<i<<" = "<<n*i<<endl;
       }
        
    }
};

int main () { 
    int n;
    cout<<"Enter the number ";
    cin>>n;
    solution s;
    s.table(n);
 }