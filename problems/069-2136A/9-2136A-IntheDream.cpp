#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--)
    {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int max_of_ab =max(a, b);
    int bmin = min(a, b);
    float min_ele = (max_of_ab / 2.0f) - 1;
    if(min_ele>bmin)
    {
        cout << "no" << endl;
    }
    else{
        int e = c - a;
        int f = d - b;
            int max_of_ef =max(e, f);
    int bmin = min(e, f);
    float min_ele = (max_of_ef / 2.0f) - 1;
    if(min_ele>bmin)
    {
        cout << "no" << endl;
    }
    else {
        cout << "yes" << endl;
    }
    }
}
}