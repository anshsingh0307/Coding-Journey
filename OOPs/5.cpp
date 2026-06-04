//Abstraction .
#include <iostream>
using namespace std ;

    class JEE{
        public:
        virtual void getRank()=0 ;
    };

    //child class
    class PW: public JEE {
        public :
        void getRank() override{
            cout << "Phone number wali rank ." ;
        }
    };

int main() {
    PW ansh ;
    ansh.getRank();
    return 0 ;
}