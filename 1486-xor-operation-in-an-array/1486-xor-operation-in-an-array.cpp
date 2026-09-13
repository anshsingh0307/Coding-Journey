class Solution {
public:

    int helper(int n){
        if(n==-1) return 0 ;
        if(n%4 == 1) return 1 ;
        else if(n%4 == 2) return n+1 ;
        else if(n%4 == 3) return 0;
        else return n ;
    
    }
    int xorOperation(int n, int start) {
        int ans = helper(start / 2 + n - 1) ^ helper(start / 2 - 1);
        ans *= 2;
        if(start % 2 == 1)
            ans ^= (n % 2);
        return ans;
    }
};