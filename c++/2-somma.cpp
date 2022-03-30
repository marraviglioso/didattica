#include <iostream>
using namespace std;

int main(){
    int number1, number2;       // dichiaro
    cout << "Inserisci il primo numero e premi il tasto Enter: " ;
    cin >> number1;             //immetto primo valore
    cout << "Inserisci il secondo numero e premi il tasto Enter: " ;
    cin >> number2;             // immetto secondo valore
    int sum;
    sum = number1 + number2;        // operazione
    cout<<"La somma e' --> "<<sum; //stampa del risultato

    cout<<endl;  // endline, salta una riga e da " un look migliore"

   //system("pause");
}

/* Ora gioca un po con il codice provando a sostituire alcuni pezzi e renderlo unico.

    Avrai notato che se provi a mettere un carattere che non e' un numero il codice non funziona.
    Questo perche' sono stati dichiarati due int (Riga 5).


    Se hai provato a cambiare operatore, cambiando l'addizione con la divisione, avrai notato un particolare.

    Se dividi 6 / 2 = 3
    Ma se 7 / 2 = 0

    Questo perche il risultato e' un numero decimale. LOOK: alla riga 10 e' stato dichiarato un int! Prova a sostituirlo con float. */