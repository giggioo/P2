#include <iostream>

using namespace std;

#include "tipo.h"
#include "liste.h"

void pesca(lista& l){
    char seme;
    int valore;
    cout<<endl<<"Seme: ";
    cin>>seme;
    cout<<endl<<"Valore: ";
    cin>>valore;
    
    tipo_inf carta = NULL;
    carta->seme = seme;
    carta->valore = valore;


    elem* e = new_elem(carta);
    ord_insert_elem(l, e);

}

void stampa(lista l){
    while(l!=NULL){
        print(head(l));
        l=tail(l);
    }
}

int main(){
    lista g1;
    pesca(g1);
    stampa(g1);
    return 0;
}