//Leetcode-28

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()>haystack.length())
        return -1 ;

        else
        return (haystack.find(needle));
    }
};