#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc,char* argv[]){
    int pid=fork();
    if(pid==0){
        printf("sono il figlio\n");
        for(int i=0;i<2000;i=i+2){
            sleep(2);
            printf("F:%d\n",i);
        }
        exit(0);
    }else{
        if(pid>0){
            printf("sono il padre\n");
            for(int i=1;i<1000;i=i+2){
                sleep(2);
            printf("P:%d\n",i);
        }
            wait(NULL);
            printf("aspetto la terminazione del figlio\n");
        }
    }
    return 0;
}