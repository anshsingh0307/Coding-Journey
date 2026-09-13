// Remove the duplicates 
#include <bits/stdc++.h>
using namespace std ;
int unique(int n , int nums[]){
    int count=1 ;
    sort(nums,nums+n);
    for(int i=1 ; i<n ; i++){
        if(nums[i]!=nums[i-1])
        count++ ;
    }
    return count ;
}

int main() {
    int n ;
    cin >>n ;
    int a[n];
    for(int i=0 ;i<n ;i++){
        cin>>a[i];
    }
    cout<<unique(n,a);
    
    return 0 ;
}