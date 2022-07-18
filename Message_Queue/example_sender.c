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
int len,id,i=1,msg_snd;
key_t key;
key=123;
struct msg text;
id=msgget(key,0666 | IPC_CREAT);
if(id < 0)
{
        perror("Message is not created");
        exit(0);
}
text.type=atoi(argv[1]); //message type
strcpy(text.message,argv[2]);
len=strlen(text.message);
msg_snd=msgsnd(id,&text,len,0);
if(msg_snd < 0)
{
        perror("message send fails ");
        exit(0);
}
printf("message of size %d sent successfully ",len);
return 0;
}

