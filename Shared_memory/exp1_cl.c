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
        shm_id=shmget(key,1024,0666);
        if(shm_id < 0)
        {
                perror("shared memory fails");
                exit(0);
        }
        shm_at = (char *)shmat(shm_id,NULL,0); 
        if (shm_at == (char *) -1) 
        {
                perror("Shared memory attach fails ");
                exit(0);
        }    
        printf("shared memory attached\n");
    
        *shm_at='*';
       // temp=shm_at;
       // temp++;
       // while( *temp != '@')
        //{
          //      sleep(1);
            //    printf("client searching for data\n");
        //}
        printf("done");
        shmdt(shm_at);
        return 0;
}


