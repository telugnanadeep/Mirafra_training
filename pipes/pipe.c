
#include<stdio.h>       
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int pipefd[2],ret;
	
	ret=pipe(pipefd);
	
	if(ret < 0)
	{
		perror("pipe faile ");
		exit(0);
	}
	pid_t pid = fork();
	if(pid < 0)
	{
		perror("fork faile ");
		exit(0);
	}
	if(pid ==0)
	{
		while(1)
		{
		sleep(10);
		char b[20];
		printf("\nthis is child process i m reading \n");
		read(pipefd[0],b,20);     //read(fd,buffer,size)
		printf("\nafter reading msg is %s\n",b);
		printf("\nchild end \n"); 
		exit(0);
		}
	}
	else
	{
		while(1)
		{
		char a[20];
		printf("\nthis is parent process i m writing \n");
		printf("\nenter data : ");
		scanf("%s",a);
		write(pipefd[1],a,strlen(a)+1);
		wait(NULL);
		printf("\nparent end\n");
		exit(0);
		}
	}

	return 0;
}
		
		
		
