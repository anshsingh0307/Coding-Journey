// print linearly from 1 to n .
#include <iostream>
using namespace std ;
void f(int i , int N){
    if(i>N)
    return ;
    cout << i << " ";
    f(i+1, N);
}

int main() {
    int n ;
    cin >> n ;
    f(1,n) ;
    return 0 ;
}