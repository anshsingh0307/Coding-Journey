#include<bits/stdc++.h>
using namespace std ;


// Constructor overloading

class Student {
public:
    string name ;

    Student(){
        cout << "Non parameterised constructor \n.";
    }

    Student(string name){
        this->name = name ;
        cout << "Parameterised constructor \n ";
    }
};

int main(){

    Student s1("Ansh Singh");
}

