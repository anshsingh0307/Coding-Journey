//Optimal approach for best day to buy and sell stocks ..
#include<bits/stdc++.h>
using namespace std ;
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0];
        int maxProfit=0 ;
        int n=prices.size();
        for(int i=1;i<n ; i++){
           int cost=prices[i]-minimum;
           maxProfit=max(maxProfit,cost);
           minimum=min(minimum,prices[i]);
        }
        return maxProfit ;
    }

    int main (){
        vector<int>prices={7,1,5,3,6,4};
        cout<<maxProfit(prices);

    }