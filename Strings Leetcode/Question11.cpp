//Reverse String Prefix (Leetcode---3794)
#include<bits/stdc++.h>
using namespace std ;
    string reversePrefix(string s, int k) {
        int left=0 ; int right=k-1 ;
        while(left<right){
            swap(s[left],s[right]);
            left++ ;
            right-- ;
        }
        return s ;
    }
