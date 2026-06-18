#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    /*int a = 34;
    cout<<"the value of a was: "<<a<<endl;
    a = 75;
    cout<<"the value of a is: "<<a<<endl;*/

    // *****Constants in c++****

    /*const int a = 3;
    cout<<"the value of a was: "<<a<<endl;
    a = 9; // you will get an error because a is a constant
    cout<<"the value of a is: "<<a<<endl;*/

    // ****MAnupulaters***

    /*int a = 3, b=77, c= 20;
    cout<<"the value of a is: "<<setw(4)<<a<<endl;
    cout<<"the value of b is: "<<setw(4)<<b<<endl;
    cout<<"the value of c is: "<<setw(4)<<c<<endl;
    cout<<"the value of a withut setw is: "<<a<<endl;
    cout<<"the value of b withut setw is: "<<b<<endl;
    cout<<"the value of c withut setw is: "<<c<<endl;*/

    //****operator precedence** */

    int a = 3, b = 4;
    // int c = a*5+b;
    int c = ((((a * 5) + b) - 54) + 69);
    cout << c;

    return 0;
}