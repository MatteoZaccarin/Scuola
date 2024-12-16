/*Scrivi un programma che chiede all'utente di inserire numeri fino a quando non digita -1. Alla fine, stampa la media dei numeri inseriti (escludendo -1).
Salvarlo come cognomeMedia.cpp
*/
#include <iostream>
using namespace std;
int main(){
    float media=0;//non può essere intero perchè la media può essere decimale
    int cont=0,num;
    do{
        cout<<"inserisci il numero:";
        cin>>num;
        if(num!=-1){
            media=media+num;
            cont++;
        }
    }while(num!=-1);
    media=media/cont;
    cout<<"la media è "<<media<<endl;
    return 0;
}