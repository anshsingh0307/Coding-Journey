//To Lowe Case (Leetcode---->>>> 709)
#include<bits/stdc++.h>
using namespace std ;
    string toLowerCase(string s) {
        for(int i=0 ; i<=s.length()-1 ; i++){
        if(s[i]>='A' && s[i]<='Z')
        s[i]=s[i]+32 ;
        }
        return s;
    }
