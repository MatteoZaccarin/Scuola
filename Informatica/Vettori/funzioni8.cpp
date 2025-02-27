/*3)Calcolo del MCD (Massimo Comune Divisore)
Scrivi una funzione che calcoli il Massimo Comune Divisore (MCD) di due numeri interi positivi. La funzione deve accettare due parametri (i due numeri) 
e restituire il MCD. Nel main, chiedi all'utente di inserire due numeri e stampa il MCD.

Inserisci due numeri: 56 98  
Il MCD di 56 e 98 è: 14*/
#include <iostream>
using namespace std;
int MCD(int num1, int num2){
    int risultato=1;
    int divisore=1;
    while(divisore<=num1 && divisore<=num2){
        if(num1%divisore==0 && num2%divisore==0)
            risultato=divisore;
        divisore++;
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

    cout<<"l'MCD e' "<<MCD(numero1,numero2)<<endl;
    return 0;
}
//scope delle variabili