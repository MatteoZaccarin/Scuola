/*3)Creare poi un programma che si faccia passare due quantità di tempo e verifichi quale è maggiore utilizzando la funzione precedente e solamente due if nel programma.*/
#include <iostream>
using namespace std;
int convertiSecondi(int ore,int minuti, int secondi){
	ore=ore*60*60;
	minuti=minuti*60;
	return ore+minuti+secondi;
}
int confrontaTempo(int ore1, int minuti1, int secondi1, int ore2, int minuti2, int secondi2){//ritorna -1 se la prima è più grande della seconda, 0 se uguali, sennò 1
	int durata1=convertiSecondi(ore1,minuti1,secondi1);
	int durata2=convertiSecondi(ore2,minuti2,secondi2);
	if(durata1>durata2)
		return -1;
	else{
		if(durata1==durata2)
			return 0;
		else
			return 1;
	}
}
int main(){
	int ore1,minuti1,secondi1,ore2,minuti2,secondi2;
	do{
		cout<<"inserisci un numero di ore:";
		cin>>ore1;
	}while(ore1<0);
	do{
		cout<<"inserisci un numero di minuti:";
		cin>>minuti1;
	}while(minuti1<0);
	do{
		cout<<"inserisci un numero di secondi:";
		cin>>secondi1;
	}while(secondi1<0);
	do{
		cout<<"inserisci un numero di ore:";
		cin>>ore2;
	}while(ore2<0);
	do{
		cout<<"inserisci un numero di minuti:";
		cin>>minuti2;
	}while(minuti2<0);
	do{
		cout<<"inserisci un numero di secondi:";
		cin>>secondi2;
	}while(secondi2<0);

	int ris=confrontaTempo(ore1,minuti1,secondi1,ore2,minuti2,secondi2);
	if(ris==0)
		cout<<"sono uguali"<<endl;
	else{
		if(ris==-1)
			cout<<"la prima è più grande";
		else
			cout<<"la seconda è più grande";
	}

	return 0;
}