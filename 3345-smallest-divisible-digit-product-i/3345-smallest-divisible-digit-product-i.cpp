class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = 0 ;
        int temp ;
        for(int i=n ; i<=INT_MAX ; i++){
            int product = 1;
            int temp = i ;
            while(temp>0){
                int r=temp%10 ;
                product*=r ;
                temp=temp/10 ;
            }
            if(product % t == 0){
            ans=i ;
            break ;
            }
        }
        return ans ;
    }
};