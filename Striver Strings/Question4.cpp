#include <bits/stdc++.h>
using namespace std ;
    string longestCommonPrefix(vector<string>& str){
        string answer="" ;
        if (str.empty()) return "" ;
        sort(str.begin(),str.end());
        string first=str[0];
        string last=str[str.size()-1];
        int length=min(first.length(),last.length());
        for(int i=0 ; i<length ;i++){
            if(first[i]!=last[i])
            break ;
            answer=answer+first[i];
        }
        return answer ;
    }
int main() {
    vector<string>str={"flowers" , "flow" , "fly", "flight"} ;
    string result=longestCommonPrefix(str) ;
    cout<< result ;
    return 0 ;
}