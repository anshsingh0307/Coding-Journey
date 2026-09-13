// Number of recent calls (Leetcode --->>> 933)

#include<bits/stdc++.h>
using namespace std ;

class RecentCounter {
public:
    queue<int> q ;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);

        while(!q.empty() && q.front()<t-3000){
            q.pop();
        }

        return q.size();
    }
};

