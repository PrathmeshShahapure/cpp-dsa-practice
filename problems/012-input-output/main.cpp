#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void printInput(){
           int ch;
           string st;
           cin >> ch;
           getline(cin>>ws ,st) ; // ws eats up white spaces before getline
           cout<<ch<<" "<<st;
       
    }
};
int main () {
    solution s;
    s.printInput();
    return 0;

 }