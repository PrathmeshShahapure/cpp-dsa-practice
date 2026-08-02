#include <bits/stdc++.h>
using namespace std;

int main (){

    int inp_entries;
    cin >> inp_entries;
    for (int i = 0; i < inp_entries; i++)
    {
        int numOfArr, total_sum = 0, count = 0;
    bool found = false;
    cin >> numOfArr;
    int arr[numOfArr];

    for (int i = 0; i < numOfArr;i++)
    {
        int a;
        cin >> a;
        arr[i]=a;
        total_sum += a;
    }
   
    if(total_sum%3==0)
    {
        cout << 0<<endl;
    }
    else if(total_sum%3==2)
    {
        cout << 1<<endl;
    }
    else if(total_sum%3==1){

     for (int i = 0; i < numOfArr;i++)
    {
        if(arr[i]%3==1)
        {

            found = true;
            break;
        }
    }
   
     if(found)
    {
        cout << 1<<endl;
    }
    else{
        cout << 2<<endl;
    }
    }
}
}