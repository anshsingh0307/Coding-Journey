//Linear searching ...
#include <iostream>
using namespace std ;

int main() {
    int n , key , loc=-1 ;
    cin >> n ;
    int a[n];
    for(int i=0 ;i<n ; i++){
        cin >> a[i] ;
    }
    cin >> key ;
    for(int i=0 ; i<n ; i++){
        if(key==a[i]){
            loc=i ;
        }
    }
    cout << loc ;
    return 0 ;
}