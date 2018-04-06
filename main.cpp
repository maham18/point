#include<iostream>
#include "Point.h"
using namespace std;
int main()
{
  point a(1.5 , 3.7);
  point b(4.5 , 5.5);
  point *c;
  point d;


  //use of constructors and overload operators =()
  b = point(3.0 , 4.0);
  c = new point(5.0 , 6.0);
  //c.display();
  cout<<"C out :"<<*c<<endl;

  //use of overload operator+()
  d = b + a;
  d.display();
  cout<<"D out :"<<d<<endl;

  //use of overload operator >()
  if(b > a )
  {
    cout<<"b > a"<<endl;
  }
  else
  {
    cout<<"b < a"<<endl;
  }

  //use of cost to point operator
  d = a + 10.4;
  d.display();
  cout<<d<<endl;
  system("pause");
}
