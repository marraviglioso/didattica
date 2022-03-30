#include <iostream>

using namespace std;

int main(){
    int numeri[10];         // Questa e' una stringa
    char stringa[10];       //Altra stringa
    
    int x=3;
    int y=3;
    int matrice [x][y];     //Io sono una matrice
    numeri[0]=10;           // Ricorda che in informatica si conta da 0! :-)
    numeri[1]=23;
    numeri[2]=56;
    numeri[3]=10;
    numeri[4]=333;
    numeri[5]=554;
    numeri[6]=12;
    numeri[7]=90;
    numeri[8]=3;
    numeri[9]=5;

    for(int i=0;i<10;i++)
    cout<<numeri[i]<<endl; // Stampo la stringa


    cout<<"Scrivi una parola: "<<endl;
    cin>>stringa;
    cout<<stringa<<endl;

    cout<<"Inserisci numeri per creare una matrice: "<<endl;
    for(int h=0;h<x;h++){
        for(int i=0;i<y;i++)
        cin>>matrice[h][i];
    }
    cout<<"Ecco la tua matrice: "<<endl;
    for(int h=0;h<x;h++){
        for(int i=0;i<y;i++)
        cout<<matrice[h][i]<< " ";
        cout<<endl;
    }
    
    cout<<endl;
    system("pause");
}