#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    double calculateAverage(int arr[], int n) {
        
        double num,ans;
        for (int i=0;i<n;i++)
        { num+=arr[i];
            
        }
        ans=num/n;
        return ans;
        
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    solution obj;
    double ans = obj.calculateAverage(arr, n);
    cout << ans << endl;
    return 0;
}