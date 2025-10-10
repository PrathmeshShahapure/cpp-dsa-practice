#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int countVowels(string str) {
        int count=0;
       for(char ch : str){
           if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E'|| ch=='I'|| ch=='O'|| ch=='U' ) {
                count=count+1;
           }
          
       }
        return count;
        
        
    }
};
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    solution obj;
    int ans = obj.countVowels(str);
    cout << ans << endl;
    return 0;
}