//creating parent and child process and child is doing work like count

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

void countfun(void)
{
	int count=5;
	for(int i=0;i<count;i++)
	{
		sleep(2);
		printf("done %d\n",i);
	}
}


int main()
{
printf("I am %d\n",getpid());
pid_t pid=fork();

printf("return %d\n",(int)pid);
if(pid < 0)
{
        perror("fork fail");
        exit(0);
}
    
if(pid == 0)
{
        printf("i am child process my id is %d\n",getpid());
        sleep(5);
	countfun();
        printf("child exiting...\n");
        exit(0);
}
else
{
        printf("i am parent process my id is %d\n",getpid());
        printf("waiting for child to complet \n");
        wait(NULL);
        printf("parent end\n");
}
//printf("i am %d\n",getpid());
return 0;
}

