#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
  int fd=0;
  int Ret=0;
  char Arr[]="Marvellous Infosystem";

  fd=open("Marvellous.txt",O_RDWR);

  if(fd==-1)
  {
    printf("unable to open file");
  }
  else
  {
    printf("file gets opend with fd :%d\n",fd);

    Ret=write(fd,Arr,10);
    printf("%d bytes get return into the files\n",Ret);
  }

  close(fd);
    return 0;
}