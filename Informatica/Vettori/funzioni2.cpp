/*SECONDO
Scrivi un programma in C++ che lavori direttamente con i vettori (senza funzioni) per svolgere i seguenti compiti:

Chiedi all'utente quanti numeri vuole inserire e utilizza un vettore per memorizzarli.

Calcola la somma di tutti gli elementi del vettore e stampa il risultato.

Determina il valore massimo e minimo tra gli elementi del vettore e stampali.

Conta quanti numeri pari sono presenti nel vettore e mostra il risultato.

ESEMPIO OUTPUT
Quanti numeri vuoi inserire? 6  
Inserisci 6 numeri: 3 8 15 4 10 7  

Somma degli elementi: 47  
Massimo: 15, Minimo: 3  
Numeri pari: 3*/
#include <iostream>
using namespace std;
int main(){
    int dim=1024;
    int array[dim];
    int n;
    int somma=0;
    int max;
    int min;
    int contaPari=0;
    do{
        cout<<"inserisci il numero n:";
        cin>>n;
    }while(n<=0);

    for(int i=0;i<n;i++){
        cout<<"inserisci il numero che verrà inserito in posizione "<<i<<":";
        cin>>array[i];
    }

    for(int i=0;i<n;i++){
        somma=somma+array[i];
    }
    cout<<"La somma è "<<somma<<endl;

    for(int i=0;i<n;i++){
        if(i==0){
            min=array[i];
            max=min;
        }else{
            if(array[i]>max)
                max=array[i];

            if(array[i]<min)
                min=array[i];
        }
    }

    if(n>=1){
        cout<<"Il massimo è "<<max<<" e il minimo è "<<min<<endl;
    }else{
        cout<<"non c'è nè massimo nè minimo"<<endl;
    }
    
    
    for(int i=0;i<n;i++){
       if(array[i]%2==0)
            contaPari++;
    }
    cout<<"il numero di elementi pari è "<<contaPari<<endl;

    return 0;
}