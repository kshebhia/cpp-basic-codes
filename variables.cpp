#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    float b = float(a); // typecastiing int to float
    cout<<b<<endl;   


    int c = 5;
    float d= float(c)/2;//typecasting, int to float
    cout<<d<<endl;
    
    char grade = 'A';
    int score = int(grade); //typecasting char to int, here it uses the ascii value of the char.  BE careful, the data type of the variable and the data type of the value to be assigned to it must be the same. 
    cout<<score<<endl;

    //arithmetic operations
    int e = 10;
    int f = 20;
    cout<<e+f<<endl;
    cout<<e-f<<endl;
    cout<<e*f<<endl;
    cout<<e/f<<endl;
    cout<<e%f<<endl;
    cout<<(e==f)<<endl;
    cout<<(e!=f)<<endl;
    cout<<(e<f)<<endl;
    cout<<(e>f)<<endl;
    cout<<(e<=f)<<endl;
    cout<<(e>=f)<<endl;
    cout<<(e&&f)<<endl; //returns true if both conditions ar etrue, here non-zero means true . 
    cout<<(e||f)<<endl; //returns true if either condition is true, here zero means true
    cout<<(!e&&f)<<endl; 




}