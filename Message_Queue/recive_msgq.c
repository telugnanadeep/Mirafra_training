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
        key_t key;
        int msg_id,msg_rcv;
        key = 123;
        msg_id = msgget(key,0666);
        if(msg_id < 0)
        {
                perror("message queue fails");
                exit(0);
        }
        else
        {
                msg_rcv= msgrcv(msg_id,&message,SIZE,0,0);
                if(msg_rcv < 0)
                {
                        perror("message Queue Recive Fails");
                        exit(0);
                }
                printf("message Recived \n");
                printf("message is %s\n",message.text);
                printf("message type %ld\n",message.type);
        }
        return 0;
}

