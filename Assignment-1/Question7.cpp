#include <iostream>
using namespace std ;

int main() {
    int n ;
    cout << "Enter the number of elements : ";
    cin >> n ;
    int a[n];
    cout << "Enter the array elements : ";
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ; 
    }
    
    int max=a[0];
    for(int i=0 ; i<n ; i++){
        if(max<a[i]){
            max=a[i] ;
        }
    }
    cout << "The largest number is : " << max ;

    return 0 ;
}