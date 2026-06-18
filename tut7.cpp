#include <iostream>

using namespace std;
int c = 45;

int main()
{
  // int a,b,c;//

  //***********Builts in data type *********/

  /*cout<<"Entre the value of a:"<<endl;
  cin>>a;
  cout<<"Entre the value of b:"<<endl;
  cin>>b;

  c = a + b;

  cout<<" the sum is"<<c<<endl;
  cout<<"The global c is"<<::c;*/

  //********* float, double and long double literals*******/

  /*float d=34.4f;
  long double e = 34.4l;
  cout<< " the size of 34.4 "<<sizeof(34.4)<<endl;
  cout<< " the size of 34.4f "<<sizeof(34.4f)<<endl;
  cout<< " the size of 34.4F "<<sizeof(34.4F)<<endl;
  cout<< " the size of 34.4l "<<sizeof(34.4l)<<endl;
  cout<< " the size of 34.4L "<<sizeof(34.4L)<<endl;
  cout<< " the size of 34.4 "<<sizeof(34.4)<<endl;



  cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;*/

  //*********Reference variables******* */

  // Rohan --> Monty ----> Rohu ----> Dangerous coder//
  /*float x = 455;
  float & y = x;

  cout<<x<<endl;
  cout<<y<<endl;*/

  //***********Typecasting***** *
  int a = 45;
  float b = 45.46;

  cout << " The value of a is " << (float)a << endl;
  cout << " The value of a is " << float(a) << endl;

  cout << " The value of b is " << (int)b << endl;
  cout << " The value of b is " << int(b) << endl;
  int c = int(b);

  cout << "The expression is " << a + b << endl;
  cout << "The expression is " << a + int(b) << endl;
  cout << "The expression is " << a + (int)b << endl;

  return 0;
}