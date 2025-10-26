// You are tasked with sorting a list of products by their prices.
// Each product has a name and a price. You need to sort them in ascending order of price.
// Note: It is given that no two products have same prices.
#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void sortProducts(vector<pair<string, int>>& products) {
      
        sort(products.begin(),products.end(),[](const pair<string,int> &a, const pair<string,int> &b){
            return a.second<b.second;
        } );
        
    }
    
    void displayProducts(const vector<pair<string, int>>& products) {
       
        for(auto p:products)
        {
            cout<<p.first<<":"<<p.second<<endl;
        }
    }
};
int main (){
    solution sol;
    vector<pair<string, int>> products = {{"Laptop", 800}, {"Smartphone", 600}, {"Tablet", 300}, {"Monitor", 400}};
    
    sol.sortProducts(products);
    
    cout << "Products sorted by price:\n";
    sol.displayProducts(products);
    
    return 0;
}