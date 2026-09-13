#include <iostream>
using namespace std ;

int main() {
     int n ;
     int count = 0 ;
    cout << "Enter the number of elements : ";
    cin >> n ;
    int a[n];
    cout << "Enter the array elements : ";
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ; 
    }

    for(int i=0 ; i<n ; i++){
        if(a[i]%2==0) {
            count++ ;
        }
    }
    cout << "The number of even numbers are : " << count ; 


    return 0 ;
}