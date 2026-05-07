#include<iostream>
using namespace std;

class Base
{
  public:
    int i,j;

};  //8byte

class Derived:public Base
{
     public:
        int x,j;
};//16bytes

int main()
{
    Base *bp=NULL;
    Derived dobj;

    bp=&dobj; //upcasting

    return 0;
}