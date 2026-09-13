//Encapsulation .
#include <iostream>
using namespace std ;

    class Leetcode{
        private :
        int Problems ;

        public:
        //Constructor
        Leetcode(){
            Problems=0 ;
        }

            //setter
            void numberOfProblems(int n){
                Problems=n ;
            }

            //getter
            int getProblems(){
                return Problems ;
            }

    };

int main() {
    Leetcode ansh ;
    ansh.numberOfProblems(50);
    cout << ansh.getProblems();
    return 0 ;
}