#include <iostream>
#include<string.h>
using namespace std ;

int main() {
    string s1 , s2 ;
    cout << "Enter your name : " << endl ;
    getline(cin,s1);

    cout << "Enter your year of study : " << endl ; 
    cin >> s2 ;

    cout << "My name is " << s1 << " and I am currently a " << s2 << " year student ." ;
    return 0 ;
}