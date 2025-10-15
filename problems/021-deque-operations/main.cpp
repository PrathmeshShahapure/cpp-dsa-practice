#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void addOrderToFront(deque<int>& orders, int orderId) {
        //Write your code here...
         
        orders.push_front(orderId);
    }
    
    void addOrderToBack(deque<int>& orders, int orderId) {
        //Write your code here...
         
        orders.push_back(orderId);
    }
    
    void removeOrderFromFront(deque<int>& orders) {
        //Write your code here...
         if(!orders.empty()){
        orders.pop_front();
    }}
    
    void removeOrderFromBack(deque<int>& orders) {
        //Write your code here...
          if(!orders.empty()){
        orders.pop_back();
    }}
    
    void displayOrders(deque<int>& orders) {
        //Write your code here...
        if(!orders.empty())
{        for( auto at :orders)
        {
            cout<<at<<endl;
        }
}
    }
};
int main() {
    deque<int> orders;
    solution obj;
    
    obj.addOrderToBack(orders, 101);
    obj.addOrderToBack(orders, 102);
    obj.addOrderToFront(orders, 100);
    
    cout << "Current Orders:" << endl;
    obj.displayOrders(orders);
    
    obj.removeOrderFromFront(orders);
    cout << "After removing from front:" << endl;
    obj.displayOrders(orders);
    
    obj.removeOrderFromBack(orders);
    cout << "After removing from back:" << endl;
    obj.displayOrders(orders);
    
    return 0;
}