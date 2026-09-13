//Question - 326
#include <bits/stdc++.h>
using namespace std ;
bool powerofTwo(int n){
            for(int i=0 ;i<=31 ; i++){
        if((int)pow(3,i)==n)
        return true ;
        }
        return false ;
}

int main() {
    int n= 81 ;
   cout << powerofTwo(n);
    return 0 ;
}