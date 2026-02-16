#include <iostream>
using namespace std ;

int main() {
    int n , n1 , r , sum=0 ; 
    cin>>n ;
    n1=n ;
    while(n>0){
        r=n%10 ;
        sum=sum+(r*r*r) ;
        n=n/10 ;
    }
if(sum==n1){
    cout<<"armstrong .";
}
else{
    cout<<"not armstrong ." ;
}
    return 0 ;
}