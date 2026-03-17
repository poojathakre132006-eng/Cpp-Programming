#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //acess specifier
    public:
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

    cout<<mobj1.No1<<"\n";

    mobj1.Fun();
    mobj2.Fun();

    mobj1.Gun();
    

    cout<<sizeof(mobj1)<<"\n";

    return 0;
}