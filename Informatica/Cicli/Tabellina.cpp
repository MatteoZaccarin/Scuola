/*Scrivi un programma che chiede all'utente un numero n e stampa la tabellina di n da 1 a 10. Es: INPUT 2 OUTPUT 2 4 6 8 10 12 14 16 18 20
Salvarlo come cognomeTabellina.cpp*/
#include <iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"inserisci n:";
    cin>>n;

    while(i<=10){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    }
    return 0;
}