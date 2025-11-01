#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int get_gcd(int a,int b)
    {  int t;
        while(b!=0)
        {  t=b;
           b= a%b;
           a=t;
        }
        return a;
    }
    int lcmArray(vector<int>& arr) {
        int res=arr[0];
        int a,b;
        for(int i=1;i<arr.size();i++)
        {  a=res;
           b=arr[i];
           res= (1LL *(a/get_gcd(a,b))*b) %1000000007;
        }
        return res;
        
    
       
    }

};
int main(){
    solution sol;
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];    
    int result=sol.lcmArray(arr);
    cout<<"LCM of array elements is: "<<result<<endl;
    return 0;
}