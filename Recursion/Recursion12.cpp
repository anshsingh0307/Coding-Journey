//Nth fibonacci number using multiple recursion calls ....>>>>>>>>>>>>>
#include <iostream>
using namespace std ;
int f(int n){
    if(n<=1) return n ;
    int last = f(n-1);
    int secondlast=f(n-2);
    return last+secondlast ;
}

int main() {
    cout << f(4);
    
    return 0 ;
}