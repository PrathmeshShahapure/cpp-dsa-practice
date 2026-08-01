#include <bits/stdc++.h>
using namespace std;

class solution{
    void helper(int arr[],int N,int i)
     {
           if(i>=N/2)
        {
            return;
        }
        else {
            swap(arr[i],arr[N-i-1]);
            helper(arr,N,i+1);
        }
     }
    
public:
    void reverse(int arr[], int N){
        //Write your code here...
        int i=0;
     helper(arr,N,i);
            
    }
};