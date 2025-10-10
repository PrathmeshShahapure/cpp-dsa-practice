#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int countChar(string str, char ch) {
        int count=0;
        for(char le : str)
        {
            if (ch==le)
            {
                count+=1;
            }
        } 
        
        return count;
    }
};
int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to count: ";
    cin >> ch;
    solution obj;
    int ans = obj.countChar(str, ch);
    cout << ans << endl;
    return 0;
}