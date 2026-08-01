#include <bits/stdc++.h>
using namespace std;
int main () {

    int times;
    vector<string> v;
    cin >> times;
    for (int i = 0; i < times; i++)
    {  string defa, usertext, inputsDV;
         int m, n;
         cin >> m;
         cin >> defa;
         cin >> n;
         cin >> usertext;
         cin >> inputsDV;


    for (int i = 0; i < inputsDV.size();i++)
    {
        if (inputsDV[i] == 'D')
        {

            defa += usertext[i];
        }
        else {
            string ini = defa;
            defa = usertext[i] + defa;
        }
    
       

    }
    v.push_back(defa);
  }

  for(auto s:v)
  {
      cout << s<<endl;
  }
}