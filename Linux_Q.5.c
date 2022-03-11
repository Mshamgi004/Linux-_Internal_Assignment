// LINUX INTERNAL //
// Q.5 //
// MAHADEV G I //



#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

char buff[]="\0";
int main()
{
     int fd;
     if((fd = creat("file1.txt", 777)) < 0)
     {
            perror("Creation error");
	    exit(1);
     }
     
   // if(write(fd,buf2,sizeof(buf2)) < 0)
   // {
   //	    perror("Writing error");
   //       exit(2);
   // }
     
     if(lseek(fd,4094,SEEK_SET) < 0)
     {
	    perror("Positioning error");
            exit(2);
     }
     if(write(fd,buff,sizeof(buff)) < 0)
     {
	    perror("Writing error");
            exit(3);
     }
return 0;

}
    		   