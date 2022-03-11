// LINUX INTERNAL //
// Q.3 //
// MAHADEV G I //


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
		
	char file[20];
	
	
	printf("Enter file name.extension : ");        // taking file name as input
	scanf("%s", file); 
	
	printf("Executing ls -l\n");
	
        
	execl("/bin/ls", "ls", "-l", file, 0);        // performing 'ls -l' operation on user file
	                                         
	return 0;
}