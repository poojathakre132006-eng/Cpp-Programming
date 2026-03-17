#include<iostream>
using namespace std;
class Demo
{
   public:
     int i;
   private:
     int j;
   protected:
    int k;

    public:
       Demo()
       {
         i=0;
         j=0;
         k=0;
       }

       void Display()
       {
         cout<<"Value of i :"<<i<<"\n";
         cout<<"Value of i :"<<j<<"\n";
         cout<<"Value of i :"<<k<<"\n";
       }
};
int mian()
{
    Demo dobj;
    dobj.Display();

    cout<<"Value of i :"<<dobj.i<<"\n";
    cout<<"Value of i :"<<dobj.j<<"\n";
    cout<<"Value of i :"<<dobj.k<<"\n";

    return 0;
}