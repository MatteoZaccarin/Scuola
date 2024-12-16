/* Scrivi un programma che chiede all’utente di inserire numeri interi finché non viene inserito -1. Al termine, stampa il massimo e il minimo dei 
numeri inseriti (escludendo -1). Es: INPUT 1 2 3 4 5 6 -4 -1  OUTPUT massimo: 6 minimo:-4
Salvarlo come cognomeMassimoMinimo.cpp*/
#include <iostream>
using namespace std;
int main(){
    int num,max,min;
    bool primaVolta=true;//il primo numero inserito deve essere per forza sia il massimo che il minimo ma come facciamo a sapere se siamo alla prima volta? ci creiamo una variabile
    // se è true sarà la prima volta, poi la settiamo a false per le volte successive
    do{
        cout<<"inserisci il numero:";
        cin>>num;
        if(num!=-1){
            if(primaVolta==true){
                max=num;
                min=num;
                primaVolta=false;
            }else{
                if(max<num){
                    max=num;
                }
                if(min>num){
                    min=num;
                }
            }
        }

    }while(num!=-1);

    if(primaVolta==true){
        cout<<"non ho ricevuto numeri diversi da -1"<<endl;
    }else{
        cout<<"max:"<<max<<"  min:"<<min<<endl;
    }
    return 0;
}
