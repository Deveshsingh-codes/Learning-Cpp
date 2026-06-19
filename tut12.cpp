#include<iostream>
using namespace std;
int main(){
    // What is a pointer?----> Data type which holds the adrress for other data types
    
    int a=3;
    
    int*b;
    b = &a;
    //int b = &a;
    //&---> (address of) operator
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the address of a is"<<b<<endl;

        // *(value at operator) ---> Dereference operator

    cout<<"the value at of b is"<<*b<<endl;

    /*Pointers simplly address store krte hai aur kuch nhi
    agpr us pointer pe phle star (*) lga do to value mil jati hai aur kisi variable se phle ampercent(&) lga do to address milta hai jise hm pointer me dal skte hai */

    // pointer to pointer//

    int**c = &b; /*pointer variable ,...ek ais apointer jo ki pointers ke address ko store krta hai*/
    cout<<"the address of b is"<<&b<<endl;
    cout<<"the address of b is"<<c<<endl;
    cout<<"the value at address c is"<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is"<<**c<<endl;
    


    


    return 0;
}