#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void insertElement(vector<int> &arr, int x) {
        // Write your code here...
        arr.push_back(x);
       
        
    }
    
    void deleteElement(vector<int> &arr, int x) {
        // Write your code here...
        arr.erase( remove(arr.begin(),arr.end(),x),arr.end());
    }
    
    void reverseArray(vector<int> &arr) {
        // Write your code here...
      reverse(arr.begin(),arr.end());
    }
    
    void sizeOfArray(vector<int> &arr) {
        // Write your code here...
        cout<<arr.size();
    }
    
    void displayArray(vector<int> &arr) {
        // Write your code here...
           for (int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
};
int main (){
    solution obj;
    vector<int> arr;
    int n;
    cout<<"Enter the number of elements you want to insert initially: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        obj.insertElement(arr,x);
    }
    obj.displayArray(arr);
    int x;
    cin>>x;
    obj.insertElement(arr,x);
    obj.displayArray(arr);
    cin>>x;
    obj.deleteElement(arr,x);
    obj.displayArray(arr);
    obj.reverseArray(arr);
    obj.displayArray(arr);
    obj.sizeOfArray(arr);
    
    return 0;
}