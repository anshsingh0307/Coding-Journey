// <<<<<<<<<<<<< Hashing using maps >>>>>>>>>
#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n ;
    cin >> n ;
    int a[n];
    for(int i=0 ;i<n ; i++ ){
        cin >> a[i];
    }    
    //Pre-compute
    map<int , int>mpp ;
    for(int i=0 ;i<n ;i++){
        mpp[a[i]]++ ;
    }

    //Iterate in the loop .
    for(auto it:mpp){
        cout<<it.first <<"->>" << it.second << endl ;
    }
    int q;
    cin >> q ;
    while(q--){
        int number ;
        cin >> number ; 
        //fetch 
        cout << mpp[number] << endl ;
    }
    return 0 ;
}