// LINUX INTERNAL //
// Q.4 //
// MAHADEV G I //



#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
	int fd1, fd2;
	char rbuff[100];
	int len;
	
	fd1 = creat("new1.txt", 0777);		//file created
		
	fd2 = open("data1.txt", O_RDONLY, 777);		//opening a existing file	--data1.txt
	
	len = read(fd2, rbuff, 60);			//reading from data.txt & saving it to rbuff[]	
	printf("Data in data1.txt -\n%s\n",rbuff);	//printing the read data from file data1.txt
	
	len = write(fd1, rbuff, 60);			//writing to 'new1.txt'
	
	printf("Data written to new1.txt\n");
	
	lseek(fd2, 5, SEEK_SET);			//lseek fd2 by 5
	read(fd2, rbuff, 50);
	printf("After lseek -- data read = %s\n",rbuff);
	
	close(fd2);
	close(fd1);
}
