#include <iostream>
#include <math.h>
#include <ctime>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class A{
public:
    A(){
        cout <<1; //first
    }
    ~A(){ //destruct function class A
        cout <<2;//sixth, last output number.
    }
};
class B{
public:
    B(){
        cout <<3; //second
    }
    ~B(){
        cout <<4;//fifth
    }
};
class C: public A, B{
public:
    C(){
        cout <<5;//third
    }
    ~C(){
        cout <<6;//fourth
    }
};

int main(){
    C c; //first you call class C which is child class of A and B, so we have to go from up to down, except the destructor function, so we have the output: 
    cout <<endl;
    cout <<endl;
    //B b; this function only call class B so the output is "34".
    return 0;
}