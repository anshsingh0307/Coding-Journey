//Length of last word (Leetcode--->>>>>>58)
#include<bits/stdc++.h>
using namespace std ;
    int lengthOfLastWord(string s) {
        int cnt=0 ;
        for(int i=s.length()-1 ; i>=0 ; i--){
            if(s[i]!=' ')
            cnt++ ;
            if(cnt!=0 && s[i]==' ')
            break ;
        }
        return cnt ;
    }
