#include<bits/stdc++.h>
using namespace std ;

class Shape{                  // abstract class
    virtual void draw() = 0 ; // pure virtual function
};
// shape class ka object nahi ban skta (since wo abstract class hai) but circle ka object ban skta h

 
class Circle : public Shape{
public: 
    void draw(){
        cout << "Drawing a circle \n";
    }
};

int main(){
    Circle c1 ;
    c1.draw();
}