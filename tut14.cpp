#include<iostream>
using namespace std;
 typedef struct employee
 
 {
    /* data */
    int eId; //4
    char favchar; //1
    float salary; //4
 }ep;

 union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds ; //4
    /* better memory management ke lie unioun ka use krte hai...
    isko aese smjho ki upr wale case me hme 
    4+1+4=9 bites chaiye thi pr pr pr
    unioun wale case me sirf hme max bite hi chaiye..mtlb ki isme se 
    sirf ek hi cheez compare ho skti hai aur is bjh se 
    jiski max bite hogi bs utni bite chaiye,,,that means 
    better memory managment 
    jha hme 9 bite use krni pd rhi thi ab sirf hm 4 bites hi use krenge....*/
};

 


int main(){
    enum meal{ breakfast, lunch, dinner};
    meal m1 = breakfast;
    meal m2 = lunch;
    meal m3 = dinner;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    //cout<<(m1==2); //ye false hai to ye show nhi krega//
    //cout<<breakfast<<endl;
    //cout<<lunch<<endl;
    //cout<<dinner<<endl;
    //struct employee devesh;
    
     /*typedef and ep ka mtlb sirf
     itna hai ki phle jha mai 'struct 
     employee' likhta ab us jgh pr 'ep' 
     likhunga ...{formate ko 
    achhe se dekho counfuse nhi hona...}*/
    //union money m1;
    //m1.rice = 34;
    //m1.car = 'c';
    ////cout<<m1.rice;
    //cout<<m1.car;

    //ep devesh; 

   // struct employee subham;
   // struct employee rohan;
   // devesh.eId = 1;
   // devesh.favchar = 'c';
   // devesh.salary = 500000000000;
   // cout<<"The value is "<<devesh.eId<<endl;
   // cout<<"The value is "<<devesh.favchar<<endl;
   // cout<<"The value is "<<devesh.salary<<endl;

    
    return 0;
}