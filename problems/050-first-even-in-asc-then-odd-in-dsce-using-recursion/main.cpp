#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void printeven(int n){
        if(n==0)return;
         printeven(n-1);
         if (n% 2==0) 
        {
             cout<< n<<" ";
        }
         
    }
    void printodd(int n)
    {
        if(n==0)return ;
     
        if(n%2!=0)
        {
            cout<< n<<" ";
        }
               printodd(n-1); 
            
      
    }
    void printEvenOdd(int n) {
        printeven(n);
        printodd(n);
       
        
       
        
    }
};
int main (){
    solution sol;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    sol.printEvenOdd(n);
}