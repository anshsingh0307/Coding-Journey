//Union of two sorted arrays !!
#include<bits/stdc++.h>
using namespace std ;
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        set<int> st ;
        for(int i=0 ; i<n1 ; i++){
            st.insert(nums1[i]);
        }
        for(int i=0 ; i<n2 ;i++){
            st.insert(nums2[i]);
        }
        vector <int> result(st.begin(),st.end()) ;
        return result ;
    }
