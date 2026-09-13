#include<bits/stdc++.h>
using namespace std ;

class Parent {
public: 
    void getInfo(){
        cout << "parent class\n" ;
    }

    virtual void hello(){
        cout << "hello from parent\n" ;
    }
};

class Child : public Parent{
public: 
    void getInfo(){
        cout << "child class\n" ;
    }

    void hello(){
        cout << "hello from child\n";
    }
};

int main(){
    Child c1;
    c1.hello();
    Parent p1;
    p1.hello();
}