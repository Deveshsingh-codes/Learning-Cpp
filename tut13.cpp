#include<iostream>
using namespace std;
int main(){
    //Array example 
        int marks[4] ={23,45,56,89}; /*Decelare and initialize thee array */

    int mathmarks[4];

    mathmarks[0] = 25;
    mathmarks[1] = 20;
    mathmarks[2] = 29;
    mathmarks[3] = 27;
    
    cout<<" These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    ////you can change a value of an array
    marks[2]=455;
    cout<<"these are marks" <<endl;
    //cout<<marks[0]<<endl;
    //cout<<marks[1]<<endl;    
    //cout<<marks[2]<<endl;
    //cout<<marks[3]<<endl;
    //for (int i = 0; i < 4; i++)
    //{
    //    /* code */cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
    //}
    //quick quiz : do the same using while and do while loops?

   for (int i = 0; i < 4; i++)
   {
       /* code */cout<<" the value of marks " <<i<< " is " <<marks[i]<<endl;
   }
    //int i=0;
    //do{cout<<"the value of marks "<<i<< "is "<<marks[i]<<endl;
    //    i++;
    //}
    //while (i<4);  
    //
    //int marks[25] = {12,12,13,14,15,16};
    //int i=0;
    //do{cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
    //i++;}
    //
    //    /* code */
    // while (i<25);
    //int marks[19]={1,2,14,35,65,1,3,1,1,2,1,21,2,2,12,25};
    //for (int i = 0; i <= 19; i++)
    //{
    //    /* code */cout<<"The value of marks " <<i<< " is "<<marks[i]<<endl;
    //    
    //}
   // int sixes[6]={1,2,3,4,5,5,};
   // int i=0;
   // do
   // {cout<<" the sixes of the inning" <<i<< "is "<<sixes[i]<<endl;
   //     i++;
   //     /* code */
   // } while (i<7);
   // 
   // 
   // pointers and arrays 
    int* p = marks;
    cout<<*(p++)<<endl;
    /*cout<<*(p)<<endl;*/



    /* *(p++) hme phli value dega
    fir *(p) next value dega
    agr ++ ke baaad p lgayenge to phle increment hoga mtlb ki phle nxt wala ayega jo *(P) aa chuka ahi usse next ayega mtlb ki 3rd wala...jb hm *(++p) krenge tb */


    

    cout<<*(++p)<<endl;
    //cout<< "the value of marks *p is"<<*p<<endl;
    //cout<< "the value of marks *(p+1) is"<<*(p+1)<<endl;
    //cout<< "the value of marks *(p+2) is"<<*(p+2)<<endl;
    //cout<< "the value of marks *(p+3) is"<<*(p+3)<<endl;
    return 0;
}