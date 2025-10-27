#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int reverseNumber(int N) {
      
        int res=0;
        while(N !=0){
            int num=N%10;
             res = res * 10 +num;
             N=N/10;
        }
        return res;
    }
};
int main () {
    int N;
    cin >> N;
    solution obj;
    cout << obj.reverseNumber(N) << endl;
    return 0;
}