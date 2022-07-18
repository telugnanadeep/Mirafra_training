#include<errno.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
#include<stdlib.h>

struct msg 
{
        long int type;
        char message[100];
};


int main()
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
printf("Enter type : ");
scanf("%ld",&text.type);
printf("\n");
printf("Enter message : ");
scanf("\n%s",text.message);
printf("\n");

msg_snd=msgsnd(id,&text,100,0);
if(msg_snd < 0)
{
        perror("message send fails ");
        exit(0);
}
printf("message sent successfully \n");
return 0;
}


