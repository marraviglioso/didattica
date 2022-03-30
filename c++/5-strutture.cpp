#include <iostream>

using namespace std;
// Ecco una dimostrazione di struttura iterativa.
int main(){
 
int x;
//Uso del do-while:
/* do{ 
    cout<<"Scrivi 33 senno non esci dal loop:";
    cin>>x;
    if(x != 33)
    cout<<"Non hai scritto 33! Scrivilo!\n"; 

}while(x != 33); */

for(int i=0;i<100;i++){
    cout<<i<<endl;
}


cout<<endl;
//system("pause");
}



/* Strutture iterative:

    While | Do-While | For

    Usiamo while quando non sappiamo quante volte ripetere l'azione, mentre For il numero di cicli e'
    gia predefinito dal programmatore.

    Nel ciclo do-while dovrai soddisfare la condizione per uscire dal loop, ovvero scrivere 33,
    se non viene soddisfatta la richiesta non si esce dal programma (tranne Ctrl+C, tranquillo).

    Nel ciclo for viene data l'istruzione di contare 100 numeri, dallo 0 fino a 99.
*/