//Understanding class and objects
#include<bits/stdc++.h>
using namespace std ;

class RCBfan{    //This is a class .
    public : 
    string favPlayer ; //These are attributes(data)
    int seasons ;
    int players ;
    int coaches ;

    void About(){     //This is called methods(functions)
        cout<<"It is the most irritating team" ;
    }
};

    int main(){
        RCBfan ansh ; //Object created 
        ansh.favPlayer = "AB Deviliers" ;
        ansh.seasons=12 ;
        ansh.About();
    }