//Reverse words in a string (Leetcode ----->>>>>>> 151)
#include<bits/stdc++.h>
using namespace std ;
    string reverseWords(string s) {
        int n=s.length();
        string res="";
        int i=n-1 ;
        while(i>=0){
            while(i>=0 && s[i]==' ')
            i-- ;
            if(i<0) break ;
            int j=i ;

            while(j>=0 && s[j]!=' ')
            j-- ;

            if(!res.empty())
            res+=' ';

            res+=s.substr(j+1,i-j); 
            
            i=j;
        }
        return res ;
    }
