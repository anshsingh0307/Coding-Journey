//Valid anagram (Leetcode---->>>> 242)
#include<bits/stdc++.h>
using namespace std ;
    bool isAnagram(string s1, string s2) {
        if(s1.length()!=s2.length()) return false ;
        vector<int>freq(26,0);

        for(char ch: s1)
        freq[ch-'a']++;

        for(char ch:s2)
        freq[ch-'a']--;

        for(int count : freq){
            if(count!=0)
            return false ;
        }
        return true ;
    }
