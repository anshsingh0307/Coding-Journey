//Find all anagrams in a string (Leetcode--->>>>438)
#include<bits/stdc++.h>
using namespace std ;
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> freqP(26, 0), freqS(26, 0);
        
        int n = s.length();
        int m = p.length();
        if (m > n) return ans;
        
        for (char ch : p) {
            freqP[ch - 'a']++;
        }
    
        for (int i = 0; i < m; i++) {
            freqS[s[i] - 'a']++;
        }
        
        int left = 0;
        int right =m;
        if (freqS == freqP) {
            ans.push_back(left);
        }
    
        while (right < n) {
            freqS[s[right] - 'a']++;          
            freqS[s[left] - 'a']--;
            
            left++;
            right++;
            
            if (freqS == freqP) {
                ans.push_back(left);
            }
        }
        
        return ans;
    }
