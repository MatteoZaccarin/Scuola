/*1)Scrivi un programma che:Crei un processo figlio per gestire ciascuna delle seguenti operazioni:
Processo 1 (figlio 1): Stampa i numeri dispari minori o uguali a n (se viene passato solo un parametro n > 0).
Processo 2 (figlio 2): Trova i numeri primi compresi tra n e m (se vengono passati due parametri con 0 < n < m).
Processo 3 (figlio 3): Calcola la somma dei parametri positivi e pari (se i parametri sono almeno 3).
Ogni processo figlio deve stampare il risultato del proprio compito, mentre il padre deve attendere la conclusione di tutti i figli.*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char* argv[]){
    int pid1=fork();
    if(pid1==0){
        //sono il figlio
    }else{
        if(pid1>0){
            //sono il padre e genero il secondo figlio
            int pid2=fork();
            if(pid2==0){
                //sono il secondo figlio
            }else{
                if(pid2>0){
                    //sono il padre e genero il terzo
                    int pid3=fork();
                    if(pid3==0){
                        //sono il terzo figlio
                    }else{
                        if(pid3>0){
                            //sono il padre dopo il terzo fork
                            wait(NULL);
                            wait(NULL);
                            wait(NULL);
                            //i 3 wait sono da inserire nell' esercizio 2
                        }else{
                            printf("errore");
                        }
                    }
                }else{
                    printf("errore");
                }
            }
        }else{
            printf("errore");
        }
    }
    
    return 0;
}