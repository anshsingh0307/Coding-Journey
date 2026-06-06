//Inheritance
/*There are 5 types of inheritance -
 1. A -> B (single) 

 2. A -> B -> C (multi-level) 

 3. {A,B} -> C (multiple) - DIAMOND PROBLEM 

 4. A -> {B,C} (hierarichal) 

 5. HYBRID Inheritance  */

 #include<bits/stdc++.h>
 using namespace std ;

    class captain{
        public :
        string name ;
        int yearsPlayed ;

        void About(){
            cout << "Failed captain who never failed ." << endl ;
        }
    };

    class coach{
        public : 
        string name ;
        int yearsCoached ;

        void Guidance(){
            cout << "Andy flower guided him ." << endl ;
        }
    };

    class player : public captain , public coach{  //This is a type ofmultiple type imheritance .
        public :
        void aboutPlayer(){
             About();
             Guidance();
            cout << "Great batsman ." ;
        }
    };

 int main(){
    player ansh ;
    ansh.aboutPlayer() ;
    return 0;
 }