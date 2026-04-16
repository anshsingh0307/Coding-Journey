//Substring without repeating characters (Leetcode----->>>>03)
#include<bits/stdc++.h>
using namespace std ;

    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0 ;
        int hash[256];
        for(int i = 0; i < 256; i++) hash[i] = -1;

        int n=s.size();
        int l=0 , r=0 , maxLength=0 ;
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1 ;
                }
            }
           int length=r-l+1 ;
            maxLength=max(length,maxLength);
            hash[s[r]]=r;
            r++;
        }
        return maxLength ;
    }
