#include<bits/stdc++.h>
using namespace std ;

class Parent {
    public:
    void getInfo(){
        cout <<"parent class \n";
    }
};

class Child : public Parent {
public:
    void getInfo(){
        cout <<"child class \n";
    }
};

int main(){
    Child c1 ;
    c1.getInfo();  // we had same function (getInfo) for both the classes but wo call hua jiska object tha .
}