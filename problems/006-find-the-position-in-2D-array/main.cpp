/*Find Position in 2D Array
Easy
You're given a 2D array of integers with dimensions nxm.
 Your task is to search for an integer k within the array.
If the integer is found, print the row and column indices as space-separated values 
indicating its position. If the integer is not found, output -1-1 to indicate that
 the element does not exist in the array.
*/
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void searchElement(int** arr, int n, int m, int k) {
      bool found=false;    
      for(int i=0;i<n && !found;i++)
      { 
          for(int j=0;j<m;j++){

            if(k==arr[i][j])
              {  
                  cout<<i<<" "<<j;
                  found=true;
                  break;
              }
            
          }
      } 
     if(!found)
     { 
       cout<<-1<<" "<<-1;
     }
        
    }
};
int main () {
    int n,m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int k;
    cout<<"Enter the value of k: "; 
    cin>>k;
    solution s;
    s.searchElement(arr,n,m,k);
    return 0;
}