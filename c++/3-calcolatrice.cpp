#include <iostream>

using namespace std;

int main(){

    int number1, number2;
    char oper;

    cout<<"numero 1: ";
    cin>>number1;

    cout<<"operator: ";
    cin>>oper;

    cout<<"numero 2: ";
    cin>>number2;

    int result;

   /* if(oper == '+'){                // All'interno delle parentesi tonde abbiamo posto la condizione 
    result = number1 + number2;}

    else if(oper == '-'){
    result = number1 - number2;}

    else if(oper == '*'){
    result = number1 * number2;}

    else if(oper == '/'){
    result = number1 / number2;}

    else {              // Questa e' una condizione di errore!
        cout<<"Ops, qualcosa e' andato storto! :-("<<endl;
        exit(1);
    }*/
    switch(oper){
        case '+': result = number1 + number2;
        break;
        case '-': result = number1 - number2;
        break;
        case '*': result = number1 * number2;
        break;
        case '/': result = number1 / number2;
        break;
    }




    cout<<"Il risultato e': "<<result;

    cout<<endl;
    //system("pause");
    return 0;

}

/*  Qui possiamo notare l'applicazione del costrutto If/elseif, non e' l'unico!
    Difatti e' stato commentato per dare spazio alla dimostrazione del costrutto switch
    Entrambi eseguono lo stesso compito, con la sola differenza di essere scritti in maniera diversa
    Quale preferite?
*/