#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--)
    {

    int n;
    cin >> n;

    string st, alpha = "abcdefghijklmnopqrstuvwxyz";
    cin >> st;

    bool found = false;
    int subindex = -1;

  
    for (int i = 0; i < alpha.size(); i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (alpha[i] == st[j]) {
                subindex = j;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    cout << st[subindex]<< st.substr(0, subindex)<< st.substr(subindex + 1) << endl;
    
}
}