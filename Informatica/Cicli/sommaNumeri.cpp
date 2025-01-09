#include <iostream>
using namespace std;
int main(){
    int n,somma=0;

    do{
        cout<<"inserisci n:";
        cin>>n;
    }while(n<=0);

    for(int i=1;i<=n;i++){
        somma=somma+i;//somma+=n;
    }

    cout<<"La somma e' "<<somma<<endl;
    return 0;
}
