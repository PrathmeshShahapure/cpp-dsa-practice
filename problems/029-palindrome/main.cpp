#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isPalindrome(int n) {
       
        int nn=n;
      int res=0;
        while( n!=0 )
        { int num;
            num= n%10;
            res= res * 10 +num; 
            n=n/10;
        }
        if(res== nn)
        { return true;
        }
        else{
            return false;
        }
        
        
    }
};
int main () {
    int N;
    cin >> N;
    solution obj;
    if(obj.isPalindrome(N))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}