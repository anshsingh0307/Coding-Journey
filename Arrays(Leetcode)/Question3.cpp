//Best time to buy and sell stocks (Leetcode ------->>>>>>>> 121)
//My brute force method but failed some test cases ...
#include <bits/stdc++.h>
using namespace std ;
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0 ;
        int minimum=prices[0];
        int pointer=0 ;
       
        for(int i=0 ;i<prices.size();i++){
            if(minimum>prices[i]){
            minimum=prices[i];
            pointer=i ;
            }
        }
        int maximum=prices[pointer];
        int pointer2=pointer ;
        for(int x=pointer+1;x<prices.size();x++){
            if(maximum<prices[x]){
            maximum=prices[x];
             pointer2=x;
        }
    }
        return max(0, prices[pointer2]-prices[pointer]) ;
            }

int main() {
    vector<int>prices={7,1,5,3,6,4};
    cout<<maxProfit(prices);
    return 0 ;
}