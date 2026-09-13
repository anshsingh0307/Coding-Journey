//Longest palindromic string (Leetcode ---->>>> 5)

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1) return s ;

        string ans = "";
        for(int i=1 ; i<s.length() ; i++){
            int low=i ;
            int high=i ;

            while(low!=-1 && high!=s.length() && s[low]==s[high]){
                string palindrome = s.substr(low, high-low+1);

                if(palindrome.length()>ans.length())
                ans=palindrome ;

                low-- ;
                high++ ;
            }

            low=i-1 ;
            high=i ;

            while(low!=-1 && high!=s.length() && s[low]==s[high]){
                string palindrome = s.substr(low, high-low+1);

                if(palindrome.length()>ans.length())
                ans=palindrome ;

                low-- ;
                high++ ;
            }
        }
        return ans ;
    }
};