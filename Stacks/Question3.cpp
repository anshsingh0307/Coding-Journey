// BaseBall Game (Leetcode----->>>>>682)

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st ;
        int sum=0 ;
        for(int i=0 ; i<operations.size() ; i++){

        if(operations[i]=="D"){
            st.push(2*st.top());
        }

        else if(operations[i]=="+"){
             int top = st.top();
             st.pop();
             int secondLast = st.top();
             st.push(top) ;
             st.push(top + secondLast);
        }

        else if(operations[i]=="C"){
            st.pop();
        }

        else{
            st.push(stoi(operations[i])) ;
        }
    }
        while(!st.empty()){
                 sum+=st.top();
            st.pop();
        }
        return sum ;
    }
};