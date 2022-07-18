#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include<unistd.h>

int main() 
{
        key_t key;
        key=123;
        char *shm_at,*n,*temp;
        int shm_id;
        char i;
        shm_id=shmget(key,1024,0666 | IPC_CREAT);
        if(shm_id < 0)
        {
                perror("shared memory fails");
                exit(0);
        }
        printf("shm_id = %d\n",shm_id);
        shm_at =(char *) shmat(shm_id, NULL, 0); 
        if (shm_at == (char *) -1) 
        {
                perror("Shared memory attach fails ");
                exit(0);
        }    
        n=shm_at;
	char s[10]="gnanadeep";
        for(i=0;s[i]!='\0';i++)
        {
                *n=s[i];
                n++;
        }
        while(*shm_at != '*')
        {
                sleep(1);
                printf("seaarching \n");
        }
       // temp=shm_at;
       // temp++;
       // *temp='@';
        shmdt(shm_at);
        return 0;
}

