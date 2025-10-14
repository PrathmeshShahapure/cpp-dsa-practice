#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<pair<string, pair<int, double>>> orders;
    
    void addOrder(string itemName, int quantity, double price) {
       
        pair<string,pair<int,double>> p1;
        p1={itemName,{quantity,price}};
        orders.push_back(p1);
        
    }
    
    void updateOrder(string itemName, int newQuantity, double newPrice) {
        for(auto &it:orders){
            if(it.first==itemName){
                it.second.first=newQuantity;
                it.second.second=newPrice;
            }           
        } 
      
    
    }
    
    double calculateTotalRevenue() {
        double total=0;
       for( auto it : orders )
       {
           total+= it.second.first*it.second.second;
       }
        return total;
    }
};
int main () { 
    solution obj;
    obj.addOrder("Laptop", 2, 1500.00);
    obj.addOrder("Smartphone", 5, 800.00);
    obj.addOrder("Headphones", 10, 150.00);
    
    cout << "Total Revenue: $" << obj.calculateTotalRevenue() << endl;
    
    obj.updateOrder("Smartphone", 3, 750.00);
    
    cout << "Total Revenue after update: $" << obj.calculateTotalRevenue() << endl; 
    
    return 0;
}