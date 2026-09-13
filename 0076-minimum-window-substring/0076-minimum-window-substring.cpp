class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) 
        return "";
        vector<int> hash(256,0) ;
        int l=0, r=0, minLength = INT_MAX , cnt = 0 , sIndex = -1 ;
        int  m = t.length() , n = s.length() ;
        for(int i=0 ; i<m ; i++){
            hash[t[i]]++ ;
        }

        while(r < s.length()){
            if(hash[s[r]] > 0){
                cnt++ ;
            }
            hash[s[r]]-- ;

            while(cnt == m){
                if(r-l+1 < minLength){
                    minLength = r-l+1 ;
                    sIndex = l ;
                }
                hash[s[l]]++ ;

                if(hash[s[l]] > 0){
                    cnt = cnt-1 ;
                }
                 l++;
            }
            r++ ;
        }
        return sIndex == -1 ? "" : s.substr(sIndex , minLength) ;
    }
};