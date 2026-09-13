//Remove all adjacent duplicates in string (Leetcode--->>>> 1047)

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st ;
        string ans ; 

        for(int i=0 ; i<s.length() ; i++){
            char ch=s[i];

            if(!st.empty() && st.top()==ch){
                 if(!st.empty()) st.pop();
            }

            else{
                st.push(ch);
            }
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end()) ;
        return ans ;
    }
};