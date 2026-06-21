#include <iostream>
using namespace std;

// in line function
inline int product(int a, int b)
{
    return a * b;
}
// not recommended to use below lines with inine functions
// int product (int a, int b){
//    static int c = 0;// this executes only once
//    c=c+1; // next time this function is run, the value of c will be retained
//    return a*b+c;
//}

float moneyreceived(int currentmoney, float factor = 1.04)
{
    /* compalsary arguments ko phle likh lo fir default arguments likho ...
    agr inko age peeche kr doge to error milega...
    like that--> ( float factor=1.04 , int currnt money)*/
    return currentmoney * factor;
}
// int strlen(cont char *p){
//     }  /* cost kyu lgana? --> agr cont lgao ge to mere khne ka mtlb hai ki hme length chaiye sirf function ki ...nhi to tum meri string ki lenth hi badal baitho ...
/* agr koi bhi khi bhi p change krega to ...compiler khta hai ki ma iaisa bilkul sweeka r nhi krunga p me chengement... dx*/
int main()
{
    int a, b;
    // cout<<"Enter the value of a and b";
    // cin>>a>>b;
    ////cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout << " if u have " << money << " Rs in your bank account, you will recive " << moneyreceived(money) << "Rs after 1 year" << endl;
    cout << " For VIP: if u have " << money << " Rs in your bank account, you will recive " << moneyreceived(money, 1.10) << "Rs after 1 year";
    return 0;
}