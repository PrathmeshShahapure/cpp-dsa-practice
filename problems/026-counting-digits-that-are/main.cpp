// You are given an integer N. Your task is to count how many of its digits can divide N completely without any remainder.
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int evenlyDivides(int N) {
     
        int count =0;
        for(auto i : to_string(N))
        {  
            int number = i- '0';
            if(N % number == 0)
            {
                count++;
            }
        }
        
        return count;
    }
};
int main() {
    int N;
    cin >> N;
    solution obj;
    cout << obj.evenlyDivides(N) << endl;
    return 0;
}