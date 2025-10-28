// You are given an integer N, and your task is to find all its divisors
//  and return them in ascending order.
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> printDivisors(int n) {
       
        set<int> listt;
        for(int i=1 ;i*i<=n;i++)
        {
            int rem ,divisor;
            if(n%i==0)
            {
                listt.insert(i);
                divisor = n/i;
                 listt.insert(divisor);
            }
        }
       
        
        vector <int> divisorbro(listt.begin(),listt.end());
        return divisorbro;
    }
};
solution obj;
int main () {
    int N;
    cin >> N;
    vector<int> result = obj.printDivisors(N);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}