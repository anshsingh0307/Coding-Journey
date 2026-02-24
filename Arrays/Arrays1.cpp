// Largest element 
#include <iostream>
using namespace std ;
int largest(int n , int nums[]){
  int max ;
  max=nums[0];
  for(int i=0 ; i<n ; i++){
    if(max<nums[i]){
        max=nums[i];
    }
  }
  return max ;
}

int main() {
    int n ;
    cin >> n ;
    int nums[n];
    for(int i=0 ;i<n ;i++){
        cin>> nums[i] ;
    }
    cout << largest(n,nums);
    
    return 0 ;
}