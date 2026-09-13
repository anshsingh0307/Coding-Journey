//Diamond problem
//It occurs when , suppose  B and C are inherited from A and D is Inherited from B and C then how will
//the inheritance work . To overcome this we use "virtual" in the classes .

#include <iostream>
using namespace std ;

    class A {
        public :
        // data 

        void aboutA(){
            cout << "This is class A ." << endl ;;
        }
    };

    class B : virtual public A {
        public:
        //data

        void aboutB(){
            cout << "This is class B ." << endl ;
        }
    };

    class C : virtual public A {
        public:
        //data

        void aboutC(){
            cout << "This is class C ." << endl ;
        }
    };

    class D : public B , public C {
        public :
        //data

        void aboutD(){
            aboutA();
            aboutB();
            aboutC();
            cout << "This is class D ." ;
        }

    };

int main() {
    D ansh ;
    ansh.aboutD();
    return 0 ;
}