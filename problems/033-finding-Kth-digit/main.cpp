// Given three integers A B, and K. Your task is to find the Kth digit 
// from the right in the number obtained by raising A to the power B
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int kthDigit(int A, int B, int k) {
        int num = pow(A,B);
        int Last_num ;
        while(k!=0)
        {
            Last_num=num%10;
            num=num/10;
            k--;
        }
        return Last_num;
        
        
    }
};
int main () {
    int A, B, K;
    cin >> A >> B >> K;
    solution obj;
    int result = obj.kthDigit(A, B, K);
    cout << result << endl;
    return 0;
}