//Container with most water (Leetcode----->>>>>>11)
#include<bits/stdc++.h>
using namespace std ;
    int maxArea(vector<int>& height) {
        int start=0;
        int end = height.size()-1 ;
        int maxVolume=0 ;
        while(start<end){
            int h=min(height[start],height[end]);
            int base=end-start ;
            maxVolume=max(maxVolume,(base*h));
            if(height[start]<height[end]){
                start++;
            }
            else{
                end-- ;
            }
        }
        return maxVolume ;
    }
