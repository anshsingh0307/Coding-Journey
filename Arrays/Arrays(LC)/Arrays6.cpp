//Right rotate an arrayy by  elements 
#include <iostream>
using namespace std ;
void rotate (int n ,int k , int arr[]){
    if(n==0) return ;
    k=k%n ;
    int temp[k];
    for(int i=0 ; i<k ; i++){
        temp[i]=arr[n+i-k] ;
    }
    for(int i=n-1 ;i>=k ; i--){
        arr[i]=arr[i-k];
    }
    for(int i=0 ; i<k ; i++){
        arr[i]=temp[i];
    }
}

int main() {
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ;i<n ;i++){
        cin >> arr[i] ;
    }
    int k ;
    cin >> k ;
    rotate(n,k,arr) ;
    for(int i=0 ;i<n ;i++){
        cout << arr[i] << " ";
    }
    return 0 ;
}