#include<bits/stdc++.h>
using namespace std;

class solution {
  public:
    int gcd(int N, int arr[])
    {
    int a=arr[0],b,temp;
    for(int i=1;i<N-1;i++)
    {  b=arr[i];
        while(b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
    }
    return a ;

    }
};
int main () {
    solution S;
    cout<<"Enter number of elements in array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    cout<<S.gcd(n,arr);
    return 0;
}