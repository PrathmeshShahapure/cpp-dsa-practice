#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void sumOfDiagonals(int matrix[][1000], int n) {
        int pri_dia=0,sec_dia=0;
        for(int i=0;i<n;i++)
        {
           pri_dia+=matrix[i][i];
           sec_dia+=matrix[i][n-1-i];
         }
        cout <<pri_dia <<" "<<sec_dia;
        
    }
};
int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    int matrix[1000][1000];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    solution obj;
    obj.sumOfDiagonals(matrix, n);
    return 0;
}