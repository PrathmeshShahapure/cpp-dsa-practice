#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int arraySum(int arr[], int n){
        int result=0;
        for (int i=0;i<n;i++){
            result+=arr[i];
        }
        return result;
    }
    
};
int main(){
        int n;
        cout<<"Enter the numbers of elements ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cout<<"Enter Element number "<<i+1<<" ";
            cin>>arr[i];
        }
        solution s;
        int sum=s.arraySum(arr,n);
        cout<<sum<<endl;
        return 0;
        
    }