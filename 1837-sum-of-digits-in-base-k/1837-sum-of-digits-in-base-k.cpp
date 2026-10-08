class Solution {
public:
    int sumBase(int n, int k) {
        int ans = 0 ;
        int sum = 0 ;
        while(n>0){
            int r = n%k ;
            ans = ans*10 + r ;
            n=n/k ;
        }
        while(ans>0){
            int x = ans%10 ;
            sum+=x ;
            ans=ans/10 ;
        }
        return sum ;
    }
};