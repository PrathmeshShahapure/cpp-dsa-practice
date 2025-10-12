#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    string comparison(int n, int m){
        //Write your code here...
        if(n>m){
            return "greater";
        }
        else if (n==m){
            return "equal";}
            else {return "lesser"; }
        
    }
};
int main() {
    int n,m;
    cout<<"Enter Number 1: ";
    cin>>n;
    cout<<"Enter Number 2: ";
    cin>>m; 
    solution s;
   cout<<s.comparison(n,m);
}