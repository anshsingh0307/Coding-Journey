//Largest odd number in a string ...
#include <bits/stdc++.h>
using namespace std ;
    string largeOddNum(string& s){
        int n=s.length() ;
        for(int i=n-1 ; i>=0 ; i--){
            if((s[i]-'0')%2!=0){
                string ans= s.substr(0,i+1);
                while(ans.length()>1 && ans[0]=='0')
                ans.erase(ans.begin());
                return ans ;
            }
        }
        return "" ;
    }
int main() {
    string s = "02146318";
    cout << "[" << largeOddNum(s) << "]" ;
    return 0 ;
}