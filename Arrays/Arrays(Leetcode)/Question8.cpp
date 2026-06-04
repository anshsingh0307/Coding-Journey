//Maximum number of vowels in a substring of a given length (Leetcode---->>>>1456)
#include<bits/stdc++.h>
using namespace std ;
    int maxVowels(string s, int k) {
        int n=s.length();
        int vowels=0 ;
        int maxVowels= 0 ;
        for(int i=0 ;i<k ;i++){
            char c=s[i];
            if(c=='a'||c=='e' || c=='i' || c== 'o' || c=='u')
            vowels++ ;
        }
        maxVowels=vowels ;
        for(int i=k ; i<n ;i++){
            char left=s[i-k];
            char right= s[i];
                if(left=='a'||left=='e' || left=='i' || left== 'o' || left=='u')
                vowels--;
                if(right=='a'||right=='e' || right=='i' || right == 'o' || right =='u')
                vowels++;
                 maxVowels=max(maxVowels,vowels);
        }
        return maxVowels ;
    }
