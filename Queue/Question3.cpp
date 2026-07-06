// Design Circular Queue

#include<bits/stdc++.h>
using namespace std ;

class MyCircularQueue {
public:
    int* arr ;
    int currSize ;
    int capacity ;
    int f , r ;
    
    MyCircularQueue(int k) {
         capacity = k ;
         arr=new int[capacity] ;
         f=0;
         r=-1 ;
        currSize=0 ;
    }
    
    bool enQueue(int value) {
        if(currSize==capacity)
        return false ;

        else{
            r=(r+1)%capacity ;
            arr[r]=value ;
            currSize++ ;
            return true ;
        }
    }
    
    bool deQueue() {
       if(currSize==0)
       return false ;

       else{
        f=(f+1)%capacity ;
        currSize-- ;
        return true ;
       }
    }
    
    int Front() {
        if(currSize==0)
        return -1 ;

        else
        return arr[f];
    }
    
    int Rear() {
        if(currSize==0) 
        return -1 ;

        else
        return arr[r];
    }
    
    bool isEmpty() {
        return (currSize==0);
    }
    
    bool isFull() {
        return (currSize==capacity);
    }
};

