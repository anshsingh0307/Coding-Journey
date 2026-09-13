#include <iostream>
using namespace std ;

int main() {
    int a[3][3];
    int sum1=0 , sum2 = 0 , sum3=0 ;
    cout << "Enter the matrix elements : ";
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> a[i][j] ;
        }
    }

    for (int i=0 ; i<1 ; i++){
        for(int j=0;j<3;j++){
        sum1+=a[i][j] ;
    }
}

 for (int i=1 ; i<2 ; i++){
        for(int j=0;j<3;j++){
        sum2+=a[i][j] ;
    }
}

 for (int i=2 ; i<3 ; i++){
        for(int j=0;j<3;j++){
        sum3+=a[i][j] ;
    }
}

cout << "The sum of 1st row is : "<< sum1 << endl ; 
cout << "The sum of 2nd row is : "<< sum2 << endl ; 
cout << "The sum of 3rd row is : "<< sum3 << endl ; 



    return 0 ;
}