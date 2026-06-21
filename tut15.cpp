#include<iostream>
using namespace std;
//int sum(int a, int b){
//    int c = a+b;
//    return c;
//}

/*FUNCTION PROTOTYPE*/

// type function-name(argument);
 //int sum(int a,int b); //--> Acceptable 
 //int sum(int a, b); //--> not  acceptable ( int b pra likhna pdega)
 //int sum(int ,int );//--> acceptable (sirf int int likh doge to bhi chlega)
 int sum(int ,int );
 //void g(void); /*is trh na likho to is trh bhi kaam chl jayega*/
 void g();
  /*ye hota hai function prototype
   jo btata hai compilor ko ki tumne 
   jo dhundha hai pr wo nhi mila to 
   usko dhundhte rho jrur milega
  jaise ki ye btata hai ki 
  compilor ne sum dhundha pr nhi
   mila fir prototype ka use kro to command ye
   mili ki dhundho jrur milega joki aage hai... */
int main(){
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    // num1, num2 are actual parameters
    cout<<" the sum is"<<sum (num1, num2);  
    g(); 
    return 0;
}
int sum(int a, int b){
    // Formal parameters a and b will be taking values from actual parameters num1 and num2
    /* formal hamre wo parametre the jo hmne function me define kiye the ...*/
    int c = a+b;
    
    return c;
}
void g(){ 
    cout<<"\nHello, good morning";
}

