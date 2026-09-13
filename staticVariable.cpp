#include<bits/stdc++.h>
using namespace std ;

void fun(){
    int x = 0 ;    // isme x baaar baar destroy hoga call stack se jitni baar function call hoga
    cout << "x: " << x << endl ;
    x++;
}

void statFun(){
    static int y = 0 ;             //isme y baar baar destroy nahi hoga , wo lifetime ke liye ban gya 
    cout << "y: " << y << endl ;
    y++ ;
}

int main(){
    fun();  
    fun();
    fun();              
    
    statFun();
    statFun();
    statFun();
}