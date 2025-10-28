// You are given two integers, N1 and N2, your task is to calculate
//  the sum of all the digits of the numbers from N1 to N2 (inclusive).

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int calculateDigitSum(int N1, int N2) {
       
        int total=0;
        for(int i=N1 ;i<=N2 ;i++)
        {  int num =i;
            while(num!=0)
            {
                int a= num%10;
                total=total+a;
                num=num/10;
            }
        }
        return total;
    }
};
int main () {
    int N1, N2;
    cin >> N1 >> N2;
    solution obj;
    int result = obj.calculateDigitSum(N1, N2);
    cout << result << endl;
    return 0;
}