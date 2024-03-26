#include <iostream>
using namespace std;

int main(){
    int a = 10; // declare and initialize 'a' variable
    int *p = &a; //declare and initialise pointer p to the variable 'a'.
    char c = 'x'; //character c
    char *q = &c; // pointer storing adress of char c. 

    //Remember to choose the rigght data type for pointer. For example, if the pointer points at int data type, the pointer should be of type int.

    cout<<*p<<" *p : The value of variable 'a' as pointed by the pointer"<<endl;
    cout<<p<< " p : The address where variable a is stored."<<endl;
    cout<<*q<<" *p0 :The value of char c"<<endl;
    cout<<q<<" p0 :The address of char c"<<endl;

    char *r= reinterpret_cast<char*>(p);
    cout<<*r<<endl;
    cout<<r<<endl;
    return 0;

}