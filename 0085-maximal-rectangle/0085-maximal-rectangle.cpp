class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st ;
        int maxArea = 0 ;
        int n = heights.size() ;

        for(int i=0 ; i<n ; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int element = st.top();
                st.pop();
                int nse = i ;
                int pse = st.empty() ? -1 : st.top();
                maxArea = max(maxArea, heights[element] * (nse-pse-1));
            }
            st.push(i);
        }
        while(!st.empty()){
            int nse = n ;
            int element = st.top();
            st.pop();
            int pse = st.empty() ? -1 : st.top();
            maxArea = max(maxArea, heights[element] * (nse-pse-1));
        }
        return maxArea ;
    }


    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size() ;
        int maxArea = 0 ;
        vector<vector<int>> prefixSum(n, vector<int>(m));

        for(int j=0 ; j<m ; j++){
            int sum = 0 ;
            for(int i=0 ; i<n ; i++){
                matrix[i][j] = matrix[i][j] - '0';
                sum+=matrix[i][j];

                if(matrix[i][j] == 0) sum=0 ;
                prefixSum[i][j] = sum ;
            }
        }

        for(int i=0 ; i<n ; i++){
            maxArea = max(maxArea, largestRectangleArea(prefixSum[i]));
        } 
        return maxArea ;
    }
};