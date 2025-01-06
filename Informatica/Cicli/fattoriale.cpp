/*Calcola il fattoriale di un numero positivo in input da tastiera. Nome "cognome2.cpp"*/
#include <iostream>
using namespace std;
int main(){
    int num,fatt=1,i=1;
    do{
        cout<<"inserisci num:";
        cin>>num;
    }while(num<=0);

    while(i<=num){
        fatt=fatt*i;
        i++;
    }
    cout<<"il fattoriale è:"<<fatt<<endl;
    return 0;
}