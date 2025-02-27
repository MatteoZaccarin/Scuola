/*Scrivi un programma in C++ che: Definisce due vettori con una dimensione
massima predefinita dimMAX = 1024. Chiede all’utente quanti elementi
vuole inserire nel primo vettore. Chiede all’utente di inserire gli elementi del
primo vettore. Chiede all’utente quanti elementi vuole inserire nel secondo
vettore. Chiede all’utente di inserire gli elementi del secondo vettore. Crea
un terzo vettore che contiene solo gli elementi presenti in entrambi i vettori.
Stampa il nuovo vettore con gli elementi comuni.*/
#include <iostream>
using namespace std;
void stampaVettore(int vettore[],int dim){
    for(int i=0;i<dim;i++){
        cout<<vettore[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int dimMAX=1024;
    int v1[dimMAX],v2[dimMAX],v3[dimMAX];
    int dim1,dim2,dim3=0;
    do{
        cout<<"inserisci la dimensione del vettore 1:";
        cin>>dim1;
    }while(dim1<=0 || dim1>=dimMAX);

    for(int i=0;i<dim1;i++){
        cout<<"inserisci l'elemento del vettore 1 in posizione "<<i<<":";
        cin>>v1[i];
    }

    do{
        cout<<"inserisci la dimensione del vettore 2:";
        cin>>dim2;
    }while(dim2<=0 || dim2>=dimMAX);

    for(int i=0;i<dim2;i++){
        cout<<"inserisci l'elemento del vettore 2 in posizione "<<i<<":";
        cin>>v2[i];
    }

    for(int i=0;i<dim1;i++){
        for(int j=0;j<dim2;j++){
            if(v1[i]==v2[j]){
                v3[dim3]=v1[i];
                dim3++;
            }
        }
    }

    stampaVettore(v3,dim3);

    return 0;
}

