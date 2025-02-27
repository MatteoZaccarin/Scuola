/*Calcolo della potenza
Scrivi un programma in C++ che utilizzi una funzione per calcolare la potenza di un numero. La funzione deve accettare due parametri: la base e l'esponente, e restituire il risultato della potenza. Nel main, chiedi all'utente di inserire la base e l'esponente, e stampa il risultato.
Esempio di output:
     Inserisci la base: 2  
     Inserisci l'esponente: 3  
     2 elevato alla 3 è: 8*/
#include <iostream>
using namespace std;
int potenza(int base, int esponente){
    int risultato=1;

    for(int i=1;i<=esponente;i++){
        risultato=risultato*base;
    }
    return risultato;
}
int main(){
    int numero1,numero2;
     do{
        cout<<"inserisci numero1:";
        cin>>numero1;
        cout<<"inserisci numero2:";
        cin>>numero2;
    }while(numero1<=0 || numero2<=0);

    cout<<"ris:"<<potenza(numero1,numero2)<<endl;
    return 0;
}