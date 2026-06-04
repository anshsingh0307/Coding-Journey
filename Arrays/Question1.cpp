//Largest element 
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin >>n ;
    int a[n] ;
    cout<< "Enter array elements :" ;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int max=a[0] ;
    for(int i=1 ;i<n ;i++){
        if(max<a[i])
        max=a[i] ;
    }
    cout<< "The largest element is :" << max ;
}