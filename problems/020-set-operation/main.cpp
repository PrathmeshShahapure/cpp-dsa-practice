#include<bits/stdc++.h>
using namespace std;

class solution {
  public:
    void insert(set<int> &s,int x)
    {
        
        s.insert(x);
        
    }

    void print_contents(set<int> &s)
    {
        
        for( int st : s)
        { cout<<st<<" ";}
        
    }

    void erase(set<int> &s,int x)
    {
        
      
        s.erase(x);
    }

    int find(set<int> &s,int x)
    { bool f =false;
       
         for( int st : s)
        {
            if(st==x)
            {
                f=true;
                break;
            }
        }
        if(f)
        {
            return 1;
        }
        else {
            return -1;
        }
    }

    int size(set<int> &s)
    {
        
        return s.size();
    }
};
int main () { 
    set<int> s;
    solution obj;
    obj.insert(s,5);
    obj.insert(s,10);
    obj.insert(s,15);
    obj.insert(s,20);
    obj.print_contents(s);
    cout<<endl;
    cout<<obj.find(s,10)<<endl;
    cout<<obj.size(s)<<endl;
    obj.erase(s,10);
    obj.print_contents(s);
    cout<<endl;
    cout<<obj.find(s,10)<<endl;
    cout<<obj.size(s)<<endl;
}