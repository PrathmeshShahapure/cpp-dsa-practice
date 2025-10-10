#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printPattern(int n) {
        for (int i=1;i<n+1 ;i++)
        {
            cout<<string(i,'*')<<endl;
        }
        
        
    }
};
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    solution obj;
    obj.printPattern(n);
    return 0;
}