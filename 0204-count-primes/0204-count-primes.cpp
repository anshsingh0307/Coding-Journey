class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;

        vector<char> prime(n, 1);

        prime[0] = 0;
        prime[1] = 0;
        int count = 1;
        for(int i = 3; i <= n/i; i += 2) {
            if(prime[i]) 
                for(int j = i*i; j < n; j += 2*i) {
                    prime[j] = 0;
                }
            }
        
        for(int i = 3; i < n; i += 2) {
            if(prime[i])
                count++;
        }

        return count;
    }
};