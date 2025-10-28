// You are given an integer N. Your task is to determine whether N is a prime number.
// Return true if N is a prime number; otherwise, return false

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isPrime(int n) {

        int count =0;
        for(int i=2;i<n;i++)
        { if(n%i==0)
        {
            count++;
            break;
        }
             
        }
        if(count==0)
        {
            return true;
            
        }
        else {
            return false;
        }
    }
};
solution obj;
int main () {   
    int N;
    cin >> N;
    if(obj.isPrime(N))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}