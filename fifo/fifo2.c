#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<sys/wait.h>
#include<string.h>

int main()
{
	int fd1,fd2,ret1,ret2;
	char a[50];
	
	ret1 = mkfifo("f1",0666);
	ret2 = mkfifo("f2",0666);

	if(ret1<0)
	{
		perror("fifo1 file 1 fail ");
	}
	if(ret2<0)
	{
		perror("fifo2 file 2 fail ");
	}	
	fd1=open("f1",O_RDWR);
	fd2=open("f2",O_RDWR);
	
	printf("pid = %d\n",getpid());

	pid_t pid = fork();
	if(pid < 0)
	{
		perror("fork fail");
		exit(0);
	}
	if(pid == 0)
	{
		while(1)
		{
			read(fd1,a,sizeof(a));
			printf("\nData = %s\n",a);
		}
	}
	else
	{
		while(1)
		{
			printf("\nenter data ");
			scanf("%s",a);
			write(fd2,a,strlen(a)+1);
		}
	}
	return 0;
}
