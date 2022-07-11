//max profit:
// Best Time to Buy and Sell Stock
// leetcode link:- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include<bits/stdc++.h>
using namespace std;

int myfunc(vector<int> &prices){
   int max1=prices[0],max_profit=0,k;
   for(int i=0;i<prices.size();i++){
        if(prices[i]<max1){
            max1=prices[i];
        }
        else if(prices[i]>max1)
        {   k=prices[i]-max1;
            max_profit=max(max_profit,k);
        }
   }

    return max_profit;
    
}
int main(){
    vector<int> prices;
    prices={7,6,4,3,1};
    int k=myfunc(prices);
    cout<<k<<endl;
}