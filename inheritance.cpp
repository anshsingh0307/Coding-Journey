#include<bits/stdc++.h>
using namespace std ;


// Multi-level Inheritance
class Person{
public:
    string name ; 
    int age ;
};



class Student : public Person{                   // here public is the mode of inheritance 
    // we want name , age and roll , but we already have name and age so we will inherit
    public:
    int rollno ;
};

class GradStudent : public Student {
public: 
    string researchArea ;
};

int main(){
    GradStudent s1 ;
    s1.name = "Ansh singh" ;
    s1.researchArea = "Quantum Physics .";
    
    cout << s1.name << endl;
    cout << s1.researchArea << endl ;
}