#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include<string.h>


#define SIZE 100

struct msg 
{
	long int type;
	char text[SIZE];
};
int main()
{
	struct msg message;
	char buff[20]= " testing ";
	key_t key;
	int msg_id,msg_snd;
	key = 123;
	msg_id = msgget(key,0666 | IPC_CREAT) ;
	printf("%d\n",msg_id);
	if(msg_id < 0)
	{
		perror("message queue fails");
		exit(0);
	}
	else
	{
		message.type=123;
		strcpy(message.text,buff);
		msg_snd= msgsnd(msg_id,&message,SIZE,0);
		if(msg_snd < 0)
		{
			perror("message Queue Send Fails");
			exit(0);
		}
		printf("message is sent \n");
		printf("message id %d\n",msg_id);
		printf("message snd %d\n",msg_snd);
	}
	return 0;
}

