/*PRIMO
Scrivi un programma in C++ che utilizzi cinque funzioni diverse per svolgere i seguenti compiti:
1)Somma di due numeri
    Implementa una funzione che accetti due numeri interi come parametri e restituisca la loro somma.
2)Numero maggiore
    Scrivi una funzione che accetti due numeri interi come parametri e restituisca il maggiore tra i due.
3)Pari o dispari
    Implementa una funzione che accetti un numero intero come parametro e restituisca true se il numero è pari, altrimenti false.
4)Fattoriale
    Scrivi una funzione che calcoli e restituisca il fattoriale di un numero passato come parametro.
5)Verifica numero primo
    Implementa una funzione che verifichi se un numero è primo. La funzione deve accettare un intero come parametro e restituire true se è primo, altrimenti false.
6)Nel main, richiedi all'utente due numeri interi.
    Utilizza tutte le cinque funzioni sopra definite per eseguire i rispettivi calcoli e mostra i risultati all'utente.
Organizza il programma in modo chiaro e leggibile.

Esempio di output atteso


Inserisci due numeri interi: 6 9  
Somma: 15  
Il maggiore tra 6 e 9 è 9  
6 è pari  
9 è dispari  
Fattoriale di 6: 720  
Fattoriale di 9: 362880  
6 è un numero primo*/
int somma(int a, int b){
    return a+b;
}
int maggiore(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int fattoriale(int a){
    int res=1;
    for(int i=1;i<=a;i++){
        res=res*i;
    }
    return res;
}
bool pari(int a){
    if(a%2==0)
        return true;
    else
        return false;
}
bool isPrimo(int a){
    int contaDivisori=0;
    for(int div=1;div<=a;div++){
        if(a%div==0)
            contaDivisori++;
    }
    if(contaDivisori==2)
        return true;
    else
        return false;
}
#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    //dovrebbe essere maggiore di 0 per determinare se è primo
    cout<<"inserisci il numero1:";
    cin>>num1;
    cout<<"inserisci il numero2:";
    cin>>num2;

    int risultatoSomma=somma(num1,num2);
    cout<<"la somma è "<<risultatoSomma<<endl;

    cout<<"il maggiore è "<<maggiore(num1,num2)<<endl;

    if(pari(num1)==true)
        cout<<num1<<" è pari"<<endl;
    else
        cout<<num1<<" è dispari"<<endl;

    if(pari(num2)==true)
        cout<<num2<<" è pari"<<endl;
    else
        cout<<num2<<" è dispari"<<endl;

    int fatt1=fattoriale(num1);
    cout<<"il fattoriale di num1 è "<<fatt1<<endl;

    int fatt2=fattoriale(num2);
    cout<<"il fattoriale di num2 è "<<fatt2<<endl;

    if(isPrimo(num1)==true)
        cout<<num1<<" è primo"<<endl;
    else
        cout<<num1<<" non è primo"<<endl;

    if(isPrimo(num2)==true)
        cout<<num2<<" è primo"<<endl;
    else
        cout<<num2<<" non è primo"<<endl;

    return 0;
}