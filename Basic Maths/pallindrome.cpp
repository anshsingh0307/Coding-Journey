#include <iostream>
using namespace std ;

int main() {
    int n , rev = 0 , r=0 , n1 ;
    cin >> n ;
    n1=n ;
    while(n>0){
        r=n%10 ;
        rev=rev*10+r ;
        n=n/10 ;
        } 
        if(rev==n1){
            cout<<"pallindrome ." ;
}
        else{
            cout<<"not pallindrome" ;
        }
    return 0 ;
}