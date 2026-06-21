//Capacity to ship packages within D days (Leetcode--->>>1011) 
#include<bits/stdc++.h>
using namespace std ; 

    int findDays(vector<int>& weights , int capacity){
        int days=1 , load=0 ;
        for(int i=0 ; i<weights.size() ; i++){
            if(load+weights[i]>capacity){
                days+=1 ;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days ;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = weights[0];
        for(int i=0 ; i<weights.size();i++){
            if(low<weights[i])
            low=weights[i];
        }

        int high =0 ;
        for(int i=0 ; i<weights.size();i++){
            high+=weights[i];
        }

        while(low<=high){
            int mid=(low+high)/2 ;
            int numberOfDays=findDays(weights , mid);
            if(numberOfDays<=days){
                high=mid-1 ;
            }
            else
            low=mid+1 ;
        }
        return low ;
    }
