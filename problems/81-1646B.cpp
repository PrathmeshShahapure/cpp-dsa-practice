#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--)
{    int n;
    cin >> n;
    vector <int> v2(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v2[i];
    }
    sort(v2.begin(), v2.end());
    int max_red_count = (n - 1) / 2;
    long long max_sum = 0;
    long long min_sum=0;
    bool got_it = false;
    for (int i = 0; i < max_red_count; i++)
    {

        max_sum += v2[n-1-i];
       
  

        if (i == 0)
        {
            min_sum+=v2[0];
             min_sum+=v2[1];

         }
         else {
          
            min_sum+= v2[i+1];
         }

         if (max_sum > min_sum)
         {
             cout << "Yes\n";
             got_it = true;
             break;
         }
     }
     if(!got_it)
     { 
        cout << "No\n";

     }


}
}