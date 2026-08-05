class Solution {
public:
    string frequencySort(string s) {
        vector<int> hash(256,0) ;
        vector<pair<int, char>> freq ;
        string ans ;

        for(int i=0 ; i<s.length() ; i++){
            hash[s[i]]++ ;
        }

        for(int i=0 ; i<256 ; i++){
            if(hash[i]>0){
                freq.push_back({hash[i] , char(i)});
            }
        }

        sort(freq.rbegin() , freq.rend());

        for(int i=0 ; i<freq.size() ; i++){
            int count = freq[i].first ;
            char c = freq[i].second ;
            while(count>0){
                ans.push_back(c);
                count-- ; 
            }
        }

        return ans ;
    }
};