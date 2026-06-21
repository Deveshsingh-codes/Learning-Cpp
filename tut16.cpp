#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a+b;
    return c;
}
// this wil not swap a and b...swap krne ke liye aapko swap pointer ka use krna pdega//
void swapPointer(int a, int b){ //temp a b
    int temp= a;         //4    4 5
    a = b;               //4    5 5
    b = temp;            //4    5 4
}
//usme kya hoga addressess paas honge...
// call by reference using pointerss..
void swapPointer(int* a, int* b){ //temp a b
    int temp= *a;         //4    4 5
    *a = *b;               //4    5 5
    *b = temp;            //4    5 4
}
// call by reference using c++ refrrence variables..
void swapReferenceVar(int &a, int &b){ //temp a b
//int & swapReferenceVar(int &a, int &b){ //temp a b
    int temp= a;         //4    4 5
    a = b;               //4    5 5
    b = temp;            //4    5 4 
//--->
//return a;
}
int main(){
    //int a =4. b = 5;
    int x =4, y = 5;
    //cout<<"the sum of 4 and 5 is"<<sum(4,5);
    cout<<"The value of x is " <<x<< "and th evalue of y is"<<y<<endl;
   // swap(x,y);  // this will not swap a and b
   //swapPointer(&x, &y);  //this will swap a and b using pointer reference
   //swapReferenceVar(x, y);  //this will swap a and b using reference reference
   swapReferenceVar(x, y);//= 766;  //this will swap a and b using reference reference
    cout<<"The value of x is " <<x<< "and th evalue of y is"<<y<<endl;
    return 0;
}