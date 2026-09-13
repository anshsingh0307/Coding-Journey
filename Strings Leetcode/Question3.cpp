//First Unique Character In a String (Leetcode---->>>>>387)
#include<bits/stdc++.h>
using namespace std ;
    int firstUniqChar(string s) {
        int hash[256]={0};
        int n=s.length();
        for(int i=0 ; i<n ; i++){
            hash[s[i]]++;
        }
        for(int i=0 ;i<n ;i++){
            if(hash[s[i]]==1)
            return i ;
        }
        return -1 ;
    }
