#include<bits/stdc++.h>
using namespace std ;

class ABC{
public:

    ABC(){
        cout << "Constructor" << endl; 
    }

    ~ABC(){
        cout << "Destructor" << endl ;
    }
};

int main(){
    if(true){
        static ABC obj;
    }
    cout << "end of main function ." << endl  ;
}