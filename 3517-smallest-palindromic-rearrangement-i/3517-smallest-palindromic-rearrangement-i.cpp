class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length() ;
        string ans ;
        if(n==0 || n==1) return s ;

        string half= s.substr(0,n/2) ; 

        sort(half.begin() , half.end()) ; 

        string reversed = half ;
        reverse(reversed.begin() , reversed.end());

        if(n%2==0){
             ans = half+reversed ; 
        }
        else{
            ans = half + s[n/2] + reversed;
        }
        return ans ;
    }
};