/*Scrivi un programma in C++ che: Definisce due vettori con una dimensione
massima predefinita dimMAX = 1024. Chiede all’utente quanti elementi
vuole inserire nel primo vettore. Chiede all’utente di inserire gli elementi del
primo vettore in ordine crescente. Chiede all’utente quanti elementi vuole

inserire nel secondo vettore. Chiede all’utente di inserire gli elementi del sec-
ondo vettore in ordine crescente. Crea un terzo vettore che contiene tutti gli

elementi dei due vettori, mantenendo l’ordine crescente. Stampa il vettore
risultante.*/
#include <iostream>
using namespace std;
void modificaVettore(int vettore[],int dim,int a){//a=2
    for(int i=0;i<dim;i++){
        vettore[i]=2;
    }
    
}
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
    int indice1=0,indice2=0;
    do{
        cout<<"inserisci la dimensione del vettore 1:";
        cin>>dim1;
    }while(dim1<=0 || dim1>=dimMAX);

    for(int i=0;i<dim1;i++){
        cout<<"inserisci l'elemento del vettore 1 in posizione "<<i<<":";
        cin>>v1[i];
    }

   /* do{
        cout<<"inserisci la dimensione del vettore 2:";
        cin>>dim2;
    }while(dim2<=0 || dim2>=dimMAX);

    for(int i=0;i<dim2;i++){
        cout<<"inserisci l'elemento del vettore 2 in posizione "<<i<<":";
        cin>>v2[i];
    }

    while(indice1<dim1 || indice2<dim2){
        if(indice1>=dim1){
            //v1 è finito
            v3[dim3]=v2[indice2];
            indice2++;
        }else{
            if(indice2>=dim2){
                //v2 è finito
                v3[dim3]=v1[indice1];
                indice1++;
            }else{
                //nessuno è finito
                if(v1[indice1]<v2[indice2]){
                    v3[dim3]=v1[indice1];
                    indice1++;
                }else{
                    v3[dim3]=v2[indice2];
                    indice2++;
                }
            }
        }
        dim3++;
    }*/
   

    stampaVettore(v1,dim1);
    modificaVettore(v1,dim1,2);
    stampaVettore(v1,dim1);

    return 0;
}
