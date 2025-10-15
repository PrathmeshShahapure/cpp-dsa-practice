#include <bits/stdc++.h>
using namespace std;

class solution {
  public:
    
    void push(stack<int>& s, int x){
        
        s.push(x);
        
    }
    
    int pop(stack<int>& s){
        
      if( !s.empty())
      {   int ele = s.top();
           s.pop();
          return ele;
      }
      else {
          return -1;
      }
    
      
    }

    bool isEmpty(stack<int>& s){
        
        return s.empty() ;
    }
    int getMin(stack<int>& s){
        
     int min=0;
      if(!s.empty()) { 
              min= s.top() ;
             stack <int> temp=s;
      temp.pop();
       while(!temp.empty())
      { 
          if(min>temp.top())
          {
              min=temp.top();
              
              temp.pop();
          }
          else { 
                temp.pop();
          }
      }
      }
             else {  min= -1 ;}
   
     
      return min;
    }
};
int main () {
    
    stack<int> s;
    solution obj;
    int n, k,p;
    cout<< "Enter number of elements to be inserted: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        obj.push(s, k);
    }
    cout<< "Minimum element in the stack is: ";
    cout << obj.getMin(s) << endl;
    cout<< "Pop element from stack: ";
    cout << obj.pop(s) << endl;
} 