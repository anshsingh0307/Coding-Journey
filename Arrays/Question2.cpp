// Second largest element 
#include <iostream>
using namespace std ;
 int func(int n , int nums[]){
    int max , max2 ;
    max=nums[0];
    for(int i=0 ; i<n ;i++){
        if(max<nums[i])
        max=nums[i] ;
    }
    max2=nums[0];
    for(int i=0 ;i<n ;i++){
        if(max2<nums[i] && nums[i]!=max)
        max2=nums[i];
    }
    return max2 ;
 }
int main() {
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    cout<<func(n,arr);
    
    return 0 ;
}