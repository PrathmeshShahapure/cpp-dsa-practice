#include <bits/stdc++.h>
using namespace std;

class solution {
  public:
    void insert(queue<int> &q, int k){
      
        q.push(k);
        
        
    }
    int findFrequency(queue<int> &q, int k){
        
        queue<int> temp=q;
        auto count=0;
            while(!temp.empty())
            {
                if(temp.front()==k)
                {
                    count++;
                    temp.pop();
                }
                else{
                  temp.pop();
            } }
         return count;
        
    }
};
int main() { 
    
        queue<int> q;
        solution obj;
        cout<< "Enter number of elements to be inserted: ";
        int n, k;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> k;
            obj.insert(q, k);
        }
        cout<< "Frequency of : ";
        cin >> k;
        cout << obj.findFrequency(q, k) << endl;
       

}