// There are 2 types of header files:
// 1. System header files: it comes with the compilor
#include <iostream>
// 2. user defined header files: it is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no  present in the current directory
// Cpp referrence... search at google//
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << " Operators in C++: " << endl;
    cout << " Folowing are the types of operators in c++: " << endl;
    // Arithmatic operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << "" << endl;

    // Assignment operators
    // int a=3,b=9
    // char d='d' ;

    //  comparison operators

    cout << "following are the comparision operators" << endl;

    cout << "the value of a == b is " << (a == b) << endl;
    cout << "the value of a != b is " << (a != b) << endl;
    cout << "the value of a <= b is " << (a <= b) << endl;
    cout << "the value of a >= b is " << (a >= b) << endl;
    cout << "the value of a < b is " << (a < b) << endl;
    cout << "the value of a > b is " << (a > b) << endl;

    // logical operators
    cout << "following are the logical operators" << endl;
    cout << "the value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) && (a < b))
         << endl;
    cout << "the value of this logical and operator ((a==b) or (a<b)) is:" << ((a == b) || (a < b))
         << endl;
    cout << "the value of this logical not operator ((a==b) && (a<b)) is:" << (!(a == b))
         << endl;

    return 0;
}