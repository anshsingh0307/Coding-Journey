//Understanding access modifiers and how to access the data from private AM using public AM
#include <iostream>
using namespace std ;

    class InstaAccount {
        private : 
        int password ;

        public :
        string userName ;

        void setPassword(int n){
            password=n ;
            cout << "Your new password is : " << password ; 
        }
    };

int main() {
    InstaAccount A1 ;
    A1.userName="Ansh Singh";
    A1.setPassword(1234) ;
    return 0 ;
}