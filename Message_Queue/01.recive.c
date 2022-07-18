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

msg_rcv=msgrcv(id,&text,100,text.type,0);
if(msg_rcv < 0)
{       
        perror("message Recive fails ");
        exit(0);
}
printf("message recived\n");
printf("message is %s\n",text.message);

return 0;
}

