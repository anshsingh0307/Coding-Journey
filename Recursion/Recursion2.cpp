//Print name 5 times using recursion ... 

#include <iostream>
using namespace std ;
void f(int i , int n ){
    if(i>n){
        return ;
    }
    cout << "Ansh ." << endl ;
    f(i+1,n);
}

int main() {
    int n ; 
    cin >> n ;
    f(1,n) ;
    return 0 ;
}