#include<iostream>
using namespace std ;
void pattern1 (int n){
 for(int i=0 ; i<=n ; i++){
        for(int j=1 ; j<=n-i ; j++){
            cout << " " ;
        }
            for(int k=1 ; k<=2*i-1 ; k++){
                cout<<"*" ;
            }
            for(int l=1 ; l<=n-i ; l++){
                cout<<" ";
            }
            cout<< endl ;
        }
    }
    void pattern2 (int n){
         for(int i=0 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout << " " ;
        }
            for(int k=1 ; k<=2*n-(2*i+1) ; k++){
                cout<<"*" ;
            }
            for(int l=1 ; l<=n-i ; l++){
                cout<<" ";
            }
            cout<< endl ;
        }
   }
   int main (){
    int n ;
    cin >> n ;
    pattern1(n);
    pattern2(n); 
   }