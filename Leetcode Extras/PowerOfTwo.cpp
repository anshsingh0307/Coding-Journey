//Question - 231
#include <bits/stdc++.h>
using namespace std ;
bool powerofTwo(int n){
            for(int i=0 ;i<=31 ; i++){
        if(pow(2,i)==n)
        return true ;
        }
        return false ;
}

int main() {
    int n= 64 ;
   cout << powerofTwo(n);
    return 0 ;
}