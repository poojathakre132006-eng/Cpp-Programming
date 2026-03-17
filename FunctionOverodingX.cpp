#include<iostream>
using namespace std;

class Hello
{
   public:
      //Addition@2ii
      int Addition(int A,int B)
      {
         return A+B;
      }

      //Addition@3iii
      int Addition(int A,int B,int C)
      {
         return A+B+C; 
      }

      //Addition@4iiii
      int Addition(int A,int B,int C,int D)
      {
         return A+B+C+D; 
      }

};
int main()
{
    Hello hobj;

    cout<<hobj.Addition(10,20)<<"\n";
    cout<<hobj.Addition(10,20,30)<<"\n";
    cout<<hobj.Addition(10,20,40,30)<<"\n";


    return 0;
}
/*
//Not allowed
  int Addition(int,int)
  void Addition(int,int)
*/