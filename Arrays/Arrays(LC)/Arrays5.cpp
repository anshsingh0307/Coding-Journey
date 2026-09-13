// Left shift an array by one position
#include <iostream>
using namespace std ;
void shift (int n , int arr[]){
    int temp = arr[0];
    for(int i = 0; i<n ; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]= temp ;
}

int main() {
    int n ;
    cin >> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    shift(n,arr);
    for(int i=0 ;i<n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0 ;
}