#include<bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;
    while(t--)
{
    int num_of_y, num_of_x, x, y,num_of_lines=0;
    cin >> num_of_y>>num_of_x >> x >> y;

    vector<int> hor_lines(num_of_y), ver_lines(num_of_x);
    

    for (int i = 0; i < num_of_y;i++)
    {
        cin >> hor_lines[i];
    }
     for (int i = 0; i < num_of_x;i++)
    {
        cin >> ver_lines[i];
    }
  for (int i = 0; i < num_of_x;i++)
    {
        if(ver_lines[i]<=x)
        {
            num_of_lines+=1;
        }
    }
    for (int i = 0; i < num_of_y;i++)
    {
        if(hor_lines[i]<=y)
        {
            num_of_lines+=1;
        }
    }
    cout << num_of_lines << "\n";
}
}