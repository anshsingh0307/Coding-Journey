//Constructors and Destructors 
#include <bits/stdc++.h>
using namespace std ;

    class TradingAccount{
        public:
        double balance ;
        string AccountHolder ;

        //Default Constructor
        TradingAccount(){
        AccountHolder="Ansh Singh" ;
        cout << "Your account has been created " << AccountHolder << endl ; ;
        }

        //Prameterised Constructor
        TradingAccount(string s){
            AccountHolder=s ;
            cout << "Your account has been created " << AccountHolder << endl ;
        }

        // Destructor
        ~TradingAccount(){
            cout << "Account destroyed , paisa gayab beta !" << endl  ;
        }

    };

int main() {
    TradingAccount P1 ;
    TradingAccount P2("Ansh") ;

    return 0 ;
}