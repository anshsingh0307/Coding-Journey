#include<iostream>
using namespace std ;
int main(){
    int a[3][3] ; 
    int sum=0 ;
    cout<<"Enter the elements of the matrix : " << endl ;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> a[i][j] ;
        } 
    }

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            sum = sum+a[i][j] ;
        } 
    }
    cout<<"The sum is : " << sum ;
    return 0 ;
}