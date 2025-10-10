// You are given an integer k and an array containing n integers.
//  Your task is to update the middle element by multiplying it with integer k,
//  and then print all the elements of the array in a space-separated format.
// Note
// If the array has an even size, multiply k by the first middle element.

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void manipulateArray(int arr[], int n, int k) {
     
        int middle;
        if(n%2==0)
        { 
             middle= n/2-1;
        }
        else {
             middle= n/2 ;
        }
       arr[middle]=arr[middle]*k;

    for( int i=0;i<n;i++ ){
    cout<<arr[i]<<" ";
    }
       
        
    }
};
int main () { 
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k: "; 
    cin>>k;
    solution s;
    s.manipulateArray(arr,n,k);
    return 0;
 }