//error
#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //acess specifier(by defult private)
    
    int No1,No2; //charecteristics

    void Fun() //behaviour
    {
        cout<<"Inside Fun\n";
    }

    void Gun()
    {
        cout<<"Inside Gun\n";
    }

};
int main()
{
    //object creation (instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<mobj1.No1<<"\n";  //error

    mobj1.Fun();//error
    mobj2.Fun();//error

    mobj1.Gun();//error
    

    cout<<sizeof(mobj1)<<"\n";

    return 0;
}