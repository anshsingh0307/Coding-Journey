// Rotate string (Leetcode ---->>> 796)

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool rotateString(string s, string goal) {
        string newString = s+s ;
        if(s.length()!=goal.length())
        return false ;

        else if(newString.find(goal)!=string::npos){
            return true ;
        }
        else
        return false ;
    }
};