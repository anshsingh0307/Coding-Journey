#include <bits/stdc++.h>
using namespace std;

class Teacher{
    public:
    // non parameterised constructor
    Teacher(){
        dept = "Computer Science";
    }

    // parameterised constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name ;
        this->dept = dept ;
        this->subject = subject ;
        this->salary = salary ;
    }

    // copy contructor , same as the default one (no difference)
    Teacher(Teacher &orgObject){
        cout << "I am custom copy constructor ...\n";
        this->name = orgObject.name ;
        this->dept = orgObject.dept ;
        this->subject = orgObject.subject ;
        this->salary = orgObject.salary ;
    }

    // attributes or properties
    private:
    double salary ;

    public:
    string name;
    string dept;
    string subject;

    // methods
    void changeDept(string newDept){
        dept = newDept ;
    }

    //setter
    void setSalary(double s){
        salary = s ;
    }

    //getter
    double getSalary(){
        return salary ;
    }

    // getters and setters are the functions used to access the value of private attributes explicitly (since here salary was private then too we were able to set and get the values).

    void getInfo(){
        cout << "name: " << name << endl ;
        cout << "subject: " << subject << endl ;
    }
};

class Student {
    public: 
    string name ;
    double* cgpaPtr ;

    Student(string name, double cgpa){
        this->name = name ;
        cgpaPtr = new double ;
        *cgpaPtr = cgpa ;
    }

     Student(Student &obj){           // Deep copy constructor
        this->name  = obj.name ;
        cgpaPtr = new double ;
        *cgpaPtr = *obj.cgpaPtr  ;
    } 

    // destructor
    ~Student(){
        cout<< "Hi , I will delete everything ." ;
        delete cgpaPtr ;  // ye dynamically allocated tha to ise alag se likhna pada 
     }

    void getInfo(){
        cout << "name: " << name << endl ;
        cout << "cgpa: " << *cgpaPtr << endl ;
    }
};

int main(){
    Student s1("Ansh singh", 9.59);
    s1.getInfo();
}