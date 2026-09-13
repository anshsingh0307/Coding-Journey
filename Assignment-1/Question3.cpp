#include<iostream>
using namespace std ; 
int main(){
    int n ;
     cout << "Enter the size of the array : " << endl ;
    cin >> n ;
    int a[n];
    cout << "Enter the elements of the array : " << endl ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    cout<<"The array elements are :" << endl ; 
    for(int i = 0 ; i<n ; i++){
        cout<<a[i] << "\t" ; 
    }

    cout << "\n The square of the elements are : " << endl ;
    for(int i=0 ; i<n ; i++){
        cout<< a[i]*a[i] << "\t" ;
    }
    return 0 ;
}