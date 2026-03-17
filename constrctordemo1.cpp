#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //acess specifier
    public:
    int No1,No2; //charecteristics

    //defult constructor
    Marvellous()
    {
      cout<<"inside defult constructor\n";
      No1=0;
      No2=0;
    }

    //paramtrised constructor
     Marvellous(int A,int B)
    {
      cout<<"inside paramtrised constructor\n";
      No1=A;
      No2=B;
    }

    //copy constructor
    Marvellous(Marvellous &ref)
    {
        cout<<"inside copy constructor\n";
        No1=ref.No1;
        No2=ref.No2;

    }

    ~Marvellous()
    {
       cout<<"inside the destructor\n";
    }
    
};
int main()
{
    cout<<"inside main\n";
    
    Marvellous mobj1;//for defult constructor
    Marvellous mobj2(11,21);//for parametrised constructor
    Marvellous mobj3(mobj2);//copy constructor 

    cout<<"End of Main\n";
    return 0;
}//All destructors get called