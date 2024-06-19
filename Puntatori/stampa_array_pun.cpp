/*
Scrivere un programma che stampi il contenuto di un vettore di interi fino al valore -1 escluso attraverso due funzioni distinte:
Entrambe le funzioni non devono utilizzare l'operazione di selezione con indice (ovvero [])
La seconda funzione, inoltre, non deve utilizzare nemmeno una variabile locale
Per la traccia, vedi programma stampa_array_pun.cc
Per la soluzione, vedi programma stampa_array_pun_sol.cc
*/

#include <iostream>
using namespace std;

void f1(int *a){
    while(*a!=-1){
        cout<<*a<<endl;
        a++;
    }
}

int main(int argc, char const *argv[]){

    int array[3]={1,2,-1};
    f1(array);
    return 0;
}