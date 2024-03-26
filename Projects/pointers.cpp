//C++ program for understanding pointers. 

#include <iostream>
using namespace std;

int main()
{    int a = 10;
    int *p;
    p = &a; // we can write directly int *p = &a; and also int* p can be written instead of int *p. 
    int b = 4;
    *p = b; //only modifies the value of aand the adress is not changed, it is still that of a. UNtil we write *p = &b adress changes to adress of b. 


    cout<<a<<" The value of a"<<endl;
    cout<<p<<" The address of 'a' stored in memory pointed by p"<<endl;
    cout<<&a<<" The address OF A"<<endl;
    cout<<b<<" The value of b"<<endl;
    cout<<&b<<" The address of b"<<endl;
    cout<<*p<<" The value of a or b????"<<endl; //dereferencing the pointer, p stores addres sof a i,e &a and *p is the dereferencing of a to give the value of a. 
    cout<<p<<endl;
    cout<<p+1<<" P Incremented by 1 gives +4 bytes adress from p"<<endl; //if char typeit would give +1 address of the data. 
    cout<<*(p+6)<<endl; //value at the address gives garbage value. as we have't stored anything there. 

    
    
    return 0;
}