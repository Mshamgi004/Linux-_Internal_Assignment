// LINUX INTERNAL //
// Q.1 //
// MAHADEV G I //


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
	
	char Rbuff[1000];
	
	int fd1 = open("input.txt", O_RDONLY, 777);       //open input file 	
	int fd2 = open("output.txt",O_RDWR, 777);	  //open output file
	int len;
	
	//reading from input.txt
	read(fd1, Rbuff, 200);
	
	printf("data read = %s\n",Rbuff);
	
	//writing to output.txt
	len = write(fd2, Rbuff, 200);
	
	printf("data written = %d \n", len);
	
	
	
	close(fd2);
	close(fd1);

return 0;	
}