#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>

struct msg 
{
        long int type;
        char message[100];
};


int main(int argc,char *argv[])
{
if(argc >= 2)
{
int len,id,i=1,msg_rcv;
key_t key;
key=123;
struct msg text;
id=msgget(key,0666);
if(id < 0)
{
        perror("Message is not created");
        exit(0);
}
text.type=atoi(argv[1]); //message type

//len=atoi(argv[2]);
msg_rcv=msgrcv(id,&text,100,text.type,0);
if(msg_rcv < 0)
{
        perror("message Recive fails ");
        exit(0);
}
printf("message recived\n");
printf("message is %s\n",text.message);
}
else
{
        struct msg text;
        key_t key;
        int msg_id,msg_rcv;
        key = 123;
        msg_id = msgget(key,0666);
	printf("%d",msg_id);
        if(msg_id < 0)
        {
                perror("message queue fails");
                exit(0);
        }
        else
        {
                msg_rcv= msgrcv(msg_id,&text,100,0,0);
		printf("%d",msg_rcv);
                if(msg_rcv < 0)
                {
                        perror("message Queue Recive Fails");
                        exit(0);
                }
                printf("message Recived \n");
                printf("message is %s\n",text.message);
        }
}
return 0;
}


